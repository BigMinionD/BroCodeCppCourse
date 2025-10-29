#include <iostream>
#include <sstream>

int main(){
    std::string name;

    // while loop is used to repeat something until something breaks the loop
    while(name.empty()){
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << '\n';

    return 0;
}
