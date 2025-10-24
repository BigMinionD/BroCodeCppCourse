#include <iostream>

/*
&& = checks if all conditions are true
|| = checks if at least one condition is true
! = reverses the logical state of its operand
*/

int main(){
    int temp;
    bool sunny = false;

    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temperature is good!\n";
    }
    else{
        std::cout << "The temperature is bad.\n";
    }
    // Alternatively
    if(temp <= 0 || temp >= 30){
        std::cout << "The temperature is bad.\n";
    }
    else{
        std::cout << "The temperature is good!\n";
    }

    if(!sunny){
        std::cout << "The weather is cloudy.";
    }
    else{
        std::cout << "It is nice and bright!";
    }

    return 0;
}
