// Program reads length & width from user and calculates area & perimeter

#include<iostream>

double perimeter(double a, double b) {
	return 2*a + 2*b;
}

double area(double a, double b) {
	return a*b;
}

int main() {
	std::cout << "Length: ";
	double length = 0;
	std::cin >> length;
	
	std::cout << "Width: ";
	double width = 0;
	std::cin >> width;
	
	std::cout << "Perimeter: " << perimeter(length, width) << "\n";
	std::cout << "Area: " << area(length, width) << "\n";
	
	return 0;
}
