#include <iostream>

// cout << (insertion operator)
// cin << (extraction operator)

int main(){
    std::string name;
    int age;

    std::cout << "What is your name? ";
    std::cin >> name;

    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Hello, " << name << "!" << '\n';
    std::cout << "You are " << age << " years old." << '\n';

    return 0;
}
