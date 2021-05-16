// Program reads price, amount and tax rate. After that it calculates the summed up retail price
#include<iostream>

double f(double p, double a, double t) {
	return (p * (1 + t / 100)) * a;
}

int main() {
	double price, amount, tax_rate = 0.0;
	
	std::cout << "Geben Sie den Artikelpreis ein: ";
	std::cin >> price;
	
	std::cout << "Geben Sie die Anzahl der Artikel ein: ";
	std::cin >> amount;
	
	std::cout << "Geben Sie den Mehrwertsteuersatz ein: ";
	std::cin >> tax_rate;
	
	std::cout << "Der Gesamtpreis ist " << f(price, amount, tax_rate) << " Euro.\n";
	
}
