#include <iostream>

// break ends a loop
// continue skips the current iteration of the loop

int main(){
    for(int i = 1; i <= 20; i++){
        if(i == 11){
            continue;
        }
        if(i == 18){
            break;
        }
        std::cout << i << '\n';
    }

    return 0;
}
