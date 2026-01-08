#include <iostream>

// const Parameters: effectively "read only" variables, mainly used for reference and pointers

void printInfo(const std::string name, const int age);

int main(){
    std::string name = "BigMinionD";
    int age = 18;

    printInfo(name, age);

    return 0;
}

void printInfo(const std::string name, const int age){
    // this breaks the code because it's attempting to assign values to "read-only" variables
    name = " ";
    age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}
