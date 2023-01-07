#include <iostream>

void get_emergency_number(std::string emergency_number) {
    std::cout << "Dial " << emergency_number << "\n";
}

int main() {
    // Original emergency services number
    std::string old_emergency_number = "999";

    // Updated emergency services number
    std::string new_emergency_number = "0118 999 881 999 119 725 3";

    // Call function with parameter!
    get_emergency_number(new_emergency_number);
}