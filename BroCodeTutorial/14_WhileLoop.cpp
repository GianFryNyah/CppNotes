#include <iostream>

int main(void){
    std::string name;

    // While repeats its scope's code until the condition isn't true
    while(name.empty()){
        std::cout << "Enter yout name: ";
        std::getline(std::cin, name);
    }

    std::cout << "Hello " << name << '!' << std::endl;
    name.clear();

    int number;
 
    // It's still a while but scope's code it's always execute at least the first time
    do{
        std::cout << "Enter a positive number: ";
        std::cin >> number;
    }while(number < 0);

    std::cout << "The number you entered is: " << number << std::endl;
    number = 0;

    return 0;
}