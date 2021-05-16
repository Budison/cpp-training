// Program reads radius and angle and calculates the area of resulting segment.

#include<iostream>
#include<cmath>

double f(double r, double w) {
	return ((pow(r, 2) / 2) * (w - sin(w)));
}

int main() {
	double r = 0;
	std::cout << "Enter radius: ";
	std::cin >> r;
	
	while(r < 0) {
		std::cout << "Radius cannot be smaller than 0! Please enter different radius: ";
		std::cin >> r;
	}
	
	double w_grad = 0;
	std::cout << "Enter angle: ";
	std::cin >> w_grad;
	
	while(w_grad < 0) {
		std::cout << "Angle cannot be smaller than 0! Please enter different angle: ";
		std::cin >> w_grad;
	}
	
	double w_bogen = (w_grad / 180) * M_PI;
	
	
	std::cout << "The area of the segment is " << f(r, w_bogen) << "\n";
	
	
	
	return 0;
}
