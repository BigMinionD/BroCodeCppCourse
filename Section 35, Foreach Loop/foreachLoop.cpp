#include <iostream>

// foreach Loop: loop that eases the traversable data over an iterable array

int main(){
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    for(std::string student : students){
        std::cout << student << '\n';
    }

    return 0;
}
