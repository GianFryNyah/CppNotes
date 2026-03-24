#include <iostream>

int main(void){
    // && = Logical AND
    // || = Logical OR
    // ! = Logical NOT

    int temp;
    std::cout << "Enter temperature value: ";
    std::cin >> temp;

    if(temp > 0 && temp < 35){
        std::cout << "Temperature is good" << std::endl;
    }
    else{
        std::cout << "Temperature is bad" << std::endl;
    }
    return 0;
}