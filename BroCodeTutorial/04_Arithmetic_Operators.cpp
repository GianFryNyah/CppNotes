#include <iostream>

int main(void){
    // They returns the result of a specific arithmetic operation ( + - * / )

    int x = 20;
    // x = x + 1; == x += 1;
    x += 1;

    x++; // x + 1
    ++x; // x + 1, the sum have precedence before any type of consideration/operation

    x -= 1;
    x--;
    --x;

    x *= 2;

    x /= 2;

    std::cout << x << std::endl;

    int mod = x % 3;
    std::cout << mod << std::endl;

    // Operators Hierarchy
    //      1. Parenthesis
    //      2. Multiplication/Division
    //      3. Addition/Subtraction
    //  Parenthesis let the programmer to force operation's precedence
    return 0;
}