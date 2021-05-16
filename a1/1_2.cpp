// Program reads price, amount and tax rate. After that it calculates the summed up retail price

#include<iostream>

double f(double p, double a, double t) {
	return (p * (1 + t / 100)) * a;
}

int main() {
	double price, amount, tax_rate = 0.0;
	
	std::cout << "Enter price: ";
	std::cin >> price;
	
	std::cout << "Enter amount: ";
	std::cin >> amount;
	
	std::cout << "Enter tax rate: ";
	std::cin >> tax_rate;
	
	std::cout << "Total price is " << f(price, amount, tax_rate) << " Euro.\n";
	
	return 0;
}
