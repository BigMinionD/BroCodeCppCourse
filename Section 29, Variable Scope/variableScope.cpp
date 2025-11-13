#include <iostream>

// Local Variables = declared inside a function or {} block
// Global Variables = declared outside of all functions

// Functions will use Local Variables before Global Variables if possible
int myNum = 3;

void printNum();

int main(){
    int myNum = 1;
    printNum();
    // :: is the global resolution operator, uses the Global Variable instead
    std::cout << ::myNum << '\n';

    return 0;
}

void printNum(){
    int myNum = 2;
    std::cout << myNum << '\n';
}
