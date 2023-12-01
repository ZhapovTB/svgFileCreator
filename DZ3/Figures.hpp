#define FIGURES
#ifdef FIGURES

#include <iostream>
#include <string_view>
#include <fstream>

struct Shape {
	double x{};
	double y{};
	std::string_view colour{};
	double opacity{};

	Shape(double inX, double inY, std::string_view inColour, double inOpacity);
};

struct Rectangle : Shape {
	double width{};
	double height{};
	double rotate{};


	Rectangle(double inX, double inY, std::string_view inColour, double inWidth, double inHeight, double inRotate, double inOpacity);
};

struct Circle : Shape {
	double radius{};

	Circle(double inX, double inY, std::string_view inColour, double inRadius, double inOpacity);
};
std::ostream& operator<<(std::ostream& out, const Rectangle* const r);
std::ostream& operator<<(std::ostream& out, const Circle* const c);





#endif // FIGURES

