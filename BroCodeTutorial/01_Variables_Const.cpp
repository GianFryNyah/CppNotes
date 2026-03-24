#include <iostream>

int main(void){
    // integer ("whole" number)
    int x; // variable's declaration
    x = 3; // assignment
    int y{5}; // control of narrowing type conversion

    // double ("large" decimal number)
    // const will be covered soon
    const double pi = 3.1415926535897932384;

    // char (single character)
    char a = 'a';

    // boolean (true or false)
    bool trueOrfalse = true;

    // string (objects representing sequence of characters)
    std::string text = "This is a string.";
    std::string dayOfweek = "Sunday";

    // const keyword specifies that a variable's value is constant
    // tells the compiler to NOT modify it and to prevent it

    double radius = 10;
    // pi = 3.5; It will return an error
    double circumference = 2 * pi * radius;
    
    // auto acts as a placeholder for a type to be deduced
    auto xyz = 72.2;

    std::cout << x << " - " << pi << std::endl;
    std::cout << xyz << std::endl;
    return 0;
}