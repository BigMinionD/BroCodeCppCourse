#include <iostream>

int main(){
    double temp;
    char unit;

    std::cout << "***** Temperature Conversion *****\n";

    // Define the units 
    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit would you like to convert to? (Please enter either F or C): ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "It is " << temp << " degrees Fahrenheit outside.\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32.0) / 1.8;
        std::cout << "It is " << temp << " degrees Celsius outside.\n";
    }
    else{
        std::cout << "Please enter only C or F.\n";
    }

    std::cout << "**********************************";

    return 0;
}
