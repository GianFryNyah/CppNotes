#include <iostream>

int my_recursion(int n){
    if(n==0) return 0;
    return n + my_recursion(n-1);

    // Starts function:
    // myrec(5) --> 5 is not 0 --> return 5 + myrec(4)          return 5 + (4 + (3 + (2 + (1 + 0)))) ----> 5 + (10) --> return 15
    // myrec(4) --> 4 is not 0 --> return 4 + myrec(3)          return 4 + (3 + (2 + (1 + 0)))
    // myrec(3) --> 3 is not 0 --> return 3 + myrec(2)          return 3 + (2 + (1 + 0))
    // myrec(2) --> 2 is not 0 --> return 2 + myrec(1)          return 2 + (1 + 0)
    // myrec(1) --> 1 is not 0 --> return 1 + myrec(0)          return 1 + 0
    // myrec(0) --> 0 is     0 --> return 0             ---->^
}

int main(){
    int n = 5;
    std::cout << "Sum of values between 0 and n with recursive approach: " << my_recursion(n) << std::endl;
    std::cout << "Sum of values between 0 and n with formula: " << (n*(n+1))/2 << std::endl;

    return 0;
}