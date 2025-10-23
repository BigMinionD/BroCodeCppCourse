#include <iostream>

int main(){
    // Arithmetic operators return the result of a specific operations (+, -, *, /)

    int studentsA = 20;
    int studentsB = 20;
    int studentsC = 20;
    int studentsD = 20;

    // All of these add one student
    studentsA = studentsA + 1;
    studentsA+=1;
    studentsA++;

    // All of these subtract one student
    studentsB = studentsB - 1;
    studentsB-=1;
    studentsB--;

    // Both of these multiply students by two
    studentsC = studentsC * 2;
    studentsC*=2;

    // Both of these divide students by two
    studentsD = studentsD / 2;
    studentsD/=2;

    // Operators follow PEMDAS
    int studentsE = 6 - 5 + 4 * (3 / 2);

    std::cout << studentsA << '\n';
    std::cout << studentsB << '\n';
    std::cout << studentsC << '\n';
    std::cout << studentsD << '\n';
    std::cout << studentsE << '\n';

    return 0;
}
