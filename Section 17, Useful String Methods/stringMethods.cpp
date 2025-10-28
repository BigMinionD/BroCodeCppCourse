#include <iostream>
// Needed for some functions, video does not specify this
#include <sstream>

int main(){
    std::string name;

    std::cout << "Enter your name: ";
    // std::getline can be used in place of std::cin
    std::getline(std::cin, name);

    // .length() can be used to measure the character length of a string
    if(name.length() > 12){
        std::cout << "Your name cannot be over 12 characters.\n";
    }
    // .empty() can be used to check if a string has a value
    else if(name.empty()){
        std::cout << "You have not entered anything.\n";
    }
    else{
        std::cout << "Hello, " << name << '\n';
    }

    // .append() can be used to add something to the end of a string
    name.append("@outlook.com");
    std::cout << "Your username is now " << name << '\n';

    // .at() can be used to show you the character at the index value
    std::cout << "The second character of your name is " << name.at(1) << '\n';

    // .insert() can be used to insert a character or string at the index value
    name.insert(0, "www.");
    std::cout << "You now have a website domain at the end of your name, " << name << '\n';

    // .find() can be used to look for a specific character in a string and tell you its index value
    std::cout << name.find('.') << '\n';

    // .erase() can be used to erase certain characters from a string
    name.erase(0, 3);
    std::cout << "The website domain has been removed, " << name << '\n';
    
    // .clear() can be used to clear the value of a string
    name.clear();
    std::cout << "Goodbye, " << name << '\n';

    return 0;
}
