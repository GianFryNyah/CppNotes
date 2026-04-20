#include <iostream>

int recMCD(int a, int b){
    if(a==b){
        return a;
    }
    else if(a>b){
        return recMCD(a-b, b);
    }
    else{
        return recMCD(a, b-a);
    }
}

int main(){
    std::cout << recMCD(22, 14) << std::endl;
    return 0;
}