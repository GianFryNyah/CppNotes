#include <iostream>

int main(void){
    // they do something if a condition is true
    // if not, then don't execute that code
    int age;
    
    std::cout << "Enter your age: "; std::cin >> age;

    if(age >= 18){
        std::cout << "Welcome to the site!" << std::endl;
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!" << std::endl;
    }
    else{
        std::cout << "You're not old enought to enter!" << std::endl;
    }

    return 0;
}