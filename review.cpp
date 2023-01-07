#include <iostream>
#include <vector>

int main() {
    std::vector<int> num_vector = {2, 4, 3, 6, 1, 9};
    std::vector<int> odd_vector;
    int sum_of_even = 0;
    int prod_of_odd = 1;

    for (int i = 0; i < num_vector.size(); i++) {
        // Number is even
        if (num_vector[i] % 2 == 0) {
            sum_of_even += num_vector[i];
        } else {
            // Number is odd
            odd_vector.push_back(num_vector[i]);
        }
    }

    for (int i = 0; i < odd_vector.size(); i++) {
        prod_of_odd *= odd_vector[i];
    }

    std::cout << "Sum of even numbers is " << sum_of_even << "\n";
    std::cout << "Product of odd numbers is " << prod_of_odd << "\n";
}