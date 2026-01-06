#include <iostream>

int main(){
    std::string cars[3][3] = {{"Mustang", "Escape", "F-150"},
                             {"Corvette", "Equinox", "Silverado"},
                             {"Challenger",}};
    int rows = sizeof(cars)/sizeof(cars[0]);
    int collumns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < collumns; j++){
            std::cout << cars[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
