// Program reads radius and angle and calculates the area of resulting sector.

#include<iostream>
#include<cmath>

double f(double r, double w) {
	return (pow(r, 2) * M_PI * (w/360));
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
	
	
	std::cout << "The area of the sector is " << f(r, w_grad) << "\n";
	
	
	
	return 0;
}
