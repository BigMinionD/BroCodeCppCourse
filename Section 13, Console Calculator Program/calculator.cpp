#include <iostream>

int main(){
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "*********** CALCULATOR ***********\n";

    // Get the operator from the user
    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    // Get the numbers from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Calculate and print the result
    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << '\n';
            break;
        default:
            std::cout << "That was not a valid operator.\n";
    }

    std::cout << "**********************************";

    return 0;
}
