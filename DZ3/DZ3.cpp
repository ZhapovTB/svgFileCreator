#include "Figures.hpp"
int main() {
	std::ofstream svg{ "pic.svg" };

	if (svg.is_open()) {
		// NESTING LEVEL #1
		svg << "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"1000\" height=\"1000\" viewBox=\"0 0 124 124\" fill=\"none\">" << std::endl;
		svg << "<svg height=\"200\" width=\"50\"" << ">\n";
		// rectangles properties : x, y, colour, width, height, rotate, opacity
		Rectangle* rectangle1{ new Rectangle(25, -30, "black", 20, 120, 12,0.8) };
		Rectangle* rectangle2{ new Rectangle(20, -80, "black", 20, 120, 110,0.8) };

		svg << rectangle1;
		svg << rectangle2;

		delete(rectangle1);
		delete(rectangle2);

		
		

		// circles properties : x, y, colour, radius
		Circle* circle1{ new Circle(35, 55, "blue", 16, 0.7) };
		Circle* circle2{ new Circle(20, 30, "red", 30, 0.8) };

		svg << circle1;
		svg << circle2;

		//delete(circle1);
		//delete(circle2);

		svg << "</svg>" << std::endl;
		// NESTING LEVEL #2 END.

		svg << "</svg>" << std::endl;
		// NESTING LEVEL #1 END.
	}

	svg.close();
	return 0;
}
