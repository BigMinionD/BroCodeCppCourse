#include <iostream>

// Namespaces allow you to have the same name for a variable in different spots

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    int x = 0;

    // Using first::x will output the x value from namespace first
    std::cout << first::x << '\n';

    // Just use x by itself to output main()'s version of x
    std::cout << x << '\n';

    return 0;
}