// When & is used in a declaration, it is a reference operator
// When & is not used in a declaration, it is an address operator
#include <iostream>

int main() {
	int power = 9000;

	std::cout << power << "\n";
	std::cout << &power << "\n";
}