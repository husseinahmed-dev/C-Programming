#include <iostream>
#include <vector>

std::vector<int> first_three_multiples(int num) {
    std::vector<int> result = {1, 2, 3};

    result[0] = 1 * num;
    result[1] = 2 * num;
    result[2] = 3 * num;
    
    return result
}

int main() {
    for (int element: first_three_multiples(8)) {
        std::cout << element << "\n";
    }
}