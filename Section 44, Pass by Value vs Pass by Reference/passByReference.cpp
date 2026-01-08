#include <iostream>

// looks for the memory addresses of the values instead of creating copies
void swap(std::string &x, std::string &y);

int main(){
    std::string x = "Kool-Aid";
    std::string y = "Water";

    // now the originals will be swapped instead of the copies
    swap(x, y);

    // originals will produce opposite values now
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}

void swap(std::string &x, std::string &y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}
