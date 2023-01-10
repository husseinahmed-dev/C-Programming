#include <iostream>

bool is_palindrome(std::string text) {
    if (text == std::string(text.rbegin(), text.rend())) {
        return true;
    }

    return false;
}