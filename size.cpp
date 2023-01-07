#include <iostream>
#include <vector>

int main() {
    
    std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

    // Add more
    grocery.push_back("Tomato");
    grocery.push_back("Potato");
    grocery.push_back("Ketchup");

    std::cout << "Vector size: " << grocery << "\n";
}