#include <iostream>

int ciphrSum(int n){
    if(n<10){return n;}
    return n%10 + ciphrSum(n/10);
}

int main(){
    std::cout << ciphrSum(2742) << std::endl;
    return 0;
}