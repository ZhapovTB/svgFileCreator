#include "Figures.hpp"

Shape::Shape(double inX, double inY, std::string_view inColour, double inOpacity) :
	x{ inX }, y{ inY }, colour{ inColour }, opacity{ inOpacity }
{};

Rectangle::Rectangle(double inX, double inY, std::string_view inColour, double inWidth, double inHeight, double inRotate = 0, double inOpacity = 1) :
	Shape(inX, inY, inColour, inOpacity), width{ inWidth }, height{ inHeight }, rotate{ inRotate }
{};

Circle::Circle(double inX, double inY, std::string_view inColour, double inRadius, double inOpacity) :
	Shape(inX, inY, inColour, inOpacity), radius{ inRadius }
{};

std::ostream& operator<<(std::ostream& out, const Rectangle* const r) {
	return out << "<rect x=\"" << r->x << "\" y=\"" << r->y << "\" transform=\"rotate(" << r->rotate << " 0 0)" << "\" width=\"" << r->width << "\" height=\"" << r->height << "\" fill=\"" << r->colour << "\" fill-opacity=\"" << r->opacity << "\"/>" << '\n';
}

std::ostream& operator<<(std::ostream& out, const Circle* const c) {
	return out << "<circle cx=\"" << c->x << "\" cy=\"" << c->y << "\" r=\"" << c->radius << "\"" << " fill=\"" << c->colour << "\"" << " fill-opacity=\"" << c->opacity << "\"/>" << '\n';
}
