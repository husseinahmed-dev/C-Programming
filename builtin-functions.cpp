#include <iostream>

int main() {
    // This seeds the random number generator:
    srand(time(NULL));
    
    // Use rand() below to initialize the_amazing_random_number
    int the_amazing_random_number = rand() % 100;
    std::cout << "The Amazing Random Number is: " << the_amazing_random_number << "\n";
}