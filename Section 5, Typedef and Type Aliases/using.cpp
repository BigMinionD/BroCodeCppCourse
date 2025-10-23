#include <iostream>
#include <vector>

// Keyword 'using' recommended for templates
using text_t = std::string;
using number_t = int;

int main(){
    text_t firstName = "BigMinionD";
    number_t age = 18;

    std::cout << firstName << '\n';
    std::cout << age << '\n';

    return 0;
}
