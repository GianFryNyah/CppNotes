#include <iostream>
#include <vector>

int MCD(int a, int b){
    if(a==b){
        return a;
    }
    else if(a>b){
        return MCD(a-b, b);
    }
    else{
        return MCD(a, b-a);
    }
}

int RmultiMCD(std::vector<int> assWiper, int n){
    if(n == assWiper.size()-1){return assWiper.at(n);}
    return MCD(assWiper.at(n), RmultiMCD(assWiper, n+1));
}

int multiMCD(std::vector<int> assWiper){
    int n = 0;
    return RmultiMCD(assWiper, n);
}

int main(){
    std::vector<int> v = {12, 4, 8, 9, 27};
    std::cout << multiMCD(v) << std::endl;
    return 0;
}