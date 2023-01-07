#include <iostream>

int main() {
    int i = 0;
    int square = 0;

    while (i < 10) {
        square = i * i;
        std::cout << i;
        std::cout << " " << square << "\n";
        i++; 
    }
}