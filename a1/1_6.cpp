// This program reads a number n and calculates the sum of all natural numbers ⇐n

#include<iostream>

int main() {

	// Read number and assign to variable n
	int n = 0;
	std::cout << "Enter a number: ";
	std::cin >> n;
	
	// Calculate sum
	int sum = 0;
	while(n > 0) {
		sum = sum + n--;
	}
	// Alternative: sum = n*(n+1) / 2 --> faster
	
	// Print sum
	std::cout << "The sum is: " << sum << '\n';
		
	
	return 0;
}
