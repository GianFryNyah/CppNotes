#include <iostream>

int main(void){
    // condition ? expression1 : expression2;
    // quick replacement to an if/else statement

    int grade = 80;

    grade >= 60 ? std::cout << "You pass!" : std::cout << "You fail!";
    std::cout << std::endl;

    // 0 corresponds to false, other values to true
    grade % 2 ? std::cout << "Is odd" : std::cout << "Is even";
    std::cout << std::endl;

    return 0;
}