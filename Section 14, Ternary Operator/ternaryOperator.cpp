#include <iostream>

// A ternary operator (?:) is a replacement to an if statement
// condition ? expression1 : expression2

int main() {
    int grade = 75;
    grade >= 60 ? std::cout << "You passed!\n" : std::cout << "You failed.\n";

    int number = 9;
    // Modulus (%) checks to see if a number divides evenly
    number % 2 == 1 ? std::cout << "ODD\n" : std::cout << "EVEN\n";

    bool hungry = true;
    // Do not need to include "==" operator for boolean variables
    hungry ? std::cout << "You are hungry.\n" : std::cout << "You are full.\n";
    // Alternatively
    std::cout << (hungry ? "You are hungry.\n" : "You are full.\n");

    return 0;
}
