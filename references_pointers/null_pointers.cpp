#include <iostream>

int main() {
	int power = 9000;
	int* ptr = nullptr; //nullptr is a new keyword introduced in C++11. It provides a typesafe pointer value representing an empty pointer. In older C/C++ code, NULL was used for this purpose. nullptr is meant as a modern replacement to NULL.
	ptr = &power;

	std::cout << ptr << "\n";
}