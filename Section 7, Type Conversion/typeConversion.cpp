#include <iostream>

/*
Type conversion turns one value of a data type into another data type
Implicit = automatic
Explicit = precede value with new data type (like int)
*/

int main(){
    int piA = 3.14;
    double piB = 3.14;
    double piC = (int) 3.14;

    // Prints '3'
    std::cout << piA << '\n';

    // Prints '3.14'
    std::cout << piB << '\n';

    // Prints '3'
    std::cout << piC << '\n';

    char acsii = 100;

    // Prints 'd'
    std::cout << acsii << '\n';

    // Prints 'd' as well
    std::cout << (char) 100 << '\n';

    // Example of why this is useful

    // Calculates what score a person got
    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    // Prints the score
    std::cout << score << "%" << '\n';

    return 0;
}
