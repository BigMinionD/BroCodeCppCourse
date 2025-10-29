#include <iostream>

// do while loops run a block of code first and then repeat again if conditions are fulfilled

int main(){
    int num;

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> num;
    }while(num < 0);

    std::cout << "The number is: " << num << '\n';

    return 0;
}
