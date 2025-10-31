#include <iostream>

// A function is a reusable block of code

// Forward call, lets the compiler know that the function exists
void textLine();

int main(){
    textLine();

    return 0;
}

void textLine(){
    std::cout << "This is a line of text.";
}
