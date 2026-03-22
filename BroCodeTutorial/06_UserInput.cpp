#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main(void){
    std::string name;
    int age;

    std::cout << "What's your full name? ";
    std::getline(std::cin >> std::ws, name); // ws catches any white spaces

    std::cout << "What's your age? ";
    std::cin >> age;

    std::cout << "Hello " << name << ", you're " << age <<  " years old." << std::endl;

    return 0;
}