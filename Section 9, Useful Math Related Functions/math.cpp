#include <iostream>

// Adds some math functions
#include <cmath>

int main(){
    double x = 3;
    double y = 4;
    double z;

    // Compares x and y to see which of the two is bigger and assigns the bigger number to z
    z = std::max(x, y);
    std::cout << z << '\n';

    // Compares x and y to see which of the two is smaller and assigns the smaller number to z
    z = std::min(x, y);
    std::cout << z << '\n';

    // Raises the first number by the power of the second number and assigns the result to z
    z = pow(2, 4);
    std::cout << z << '\n';

    // Assigns the square root of the number to z
    z = sqrt(9);
    std::cout << z << '\n';

    // Assigns the absolute value of a number to z
    z = abs(-4);
    std::cout << z << '\n';

    // Rounds a number and assigns the value to z
    x = 3.14;
    z = round(x);
    std::cout << z << '\n';

    // Rounds a number up and assigns the value to z
    z = ceil(x);
    std::cout << z << '\n';

    // Rounds a number down and assigns the value to z
    x = 3.99;
    z = floor(x);
    std::cout << z << '\n';

    return 0;
}
