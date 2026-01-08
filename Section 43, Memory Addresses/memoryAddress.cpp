#include <iostream>

// memory address: a location in memory where data is stored
// can be accessed with & (address-of operator)

int main(){
    std::string name = "BigMinionD";
    int age = 18;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;
}
