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

    std::cout << x << '\n';

    return 0;
}