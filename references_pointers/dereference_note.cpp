// When * is used in a declaration, it is creating a pointer
// When * is not used in a declaration, it is a dereference operator
#include <iostream>

int main() {
	int power = 9000;
	int* ptr = &power;

	std::cout << ptr << "\n";	// 0x7fff8b48f87c
	std::cout << *ptr << "\n";	// 9000
}