// This program calculates from Euro to Dollar or Dollar to Euro

#include<iostream>

int main() {

	const double EXCHANGE_RATE = 1.2226;

	std::string answer;
	std::cout << "Do you want to exchange from EURO->DOLLAR (press 1) or from DOLLAR->EURO (press 2)? ";
	std::cin >> answer;
	
	if(answer == "1") {
		double euro = 0;
		std::cout << "Enter amount of EURO: ";
		std::cin >> euro;
		std::cout << euro << " EURO are ";
		std::printf("%.2f", euro*EXCHANGE_RATE);
		std:: cout << " DOLLAR\n";
	}
	if(answer == "2") {
		double dollar = 0;
		std::cout << "Enter amount of DOLLAR: ";
		std::cin >> dollar;
		std::cout << dollar << " DOLLAR are ";
		std::printf("%.2f", dollar/EXCHANGE_RATE);
		std:: cout << " EURO\n";
	}
	else {
		std::cout << "Invalid input\n";
	}


	return 0;
}

