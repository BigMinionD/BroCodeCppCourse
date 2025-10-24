#include <iostream>

/*
If Statements:
If a condition is true, do something
Otherwise, don't do something or do something else
*/

int main(){
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 100){
        std::cout << "You are too old to enter this site!" << '\n';
    }
    else if(age >= 18){
        std::cout << "Welcome to the site!" << '\n';
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!" << '\n';
    }
    else{
        std::cout << "You are not old enough to enter!" << '\n';
    }

    return 0;
}
