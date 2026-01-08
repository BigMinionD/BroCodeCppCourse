#include <iostream>

void swap(std::string x, std::string y);

int main(){
    std::string x = "Kool-Aid";
    std::string y = "Water";

    // creates copies of the variables and switches those copies, does not change the originals
    swap(x, y);

    // originals still produce same value
    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}

void swap(std::string x, std::string y){
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}
