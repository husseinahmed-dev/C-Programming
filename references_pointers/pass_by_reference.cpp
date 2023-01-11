#include <iostream>

int triple(int &i) {
	i = i * 3;
	return i;
}

int main() {
	int num = 1;

	std::cout << triple(num) << "\n";	// Pass-by-Value: 3, Pass-by-Reference: 3
	std::cout << triple(num) << "\n";	// Pass-by-Value: 3, Pass-by-Reference: 9
}