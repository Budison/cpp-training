// This program transforms from Celsius to Fahrenheit

#include<iostream>
#include<string>

int main() {
	bool repeat = false;
	do {
		double celsius = 0;
		std::cout << "Enter Celsius: ";
		std::cin >> celsius;
		
		double fahrenheit = (celsius * 1.8) + 32;
		std::cout << celsius << " Celsius are " << fahrenheit << " Fahrenheit\n";
		
		std::cout << "Do you want to calculate again? (y/n) ";
		std::string input;
		std::cin >> input;
		
		if(input == "y") {
			repeat = true;
		}
		else {
			repeat = false;
		}
		
	} while (repeat);
	
	return 0;
}

