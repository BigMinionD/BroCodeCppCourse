#include <iostream>
#include <cmath>

int main(){
    // Defines the variables to be used in this program
    double a;
    double b;
    double c;

    // Ask the user to input the sides
    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;

    // Squares both a and b;
    a = pow(a, 2);
    b = pow(b, 2);

    // Calculates c by squaring rooting the sum of a and b
    c = sqrt(a + b);

    std::cout << "Side C: " << c << '\n';

    return 0;
}
