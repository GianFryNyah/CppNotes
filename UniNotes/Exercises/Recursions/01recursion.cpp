// https://www.geeksforgeeks.org/dsa/cpp-program-to-print-all-permutations-of-a-given-string/

#include <iostream>

void permutation(std::string to_permute, std::string base_case){
    if(base_case == ""){
        std::cout << to_permute << " - ";
    }
    else{
        ;
    }
}

int main(){
    std::string ass = "asss";
    std::cout << ass.substr(1) << std::endl;
    std::cout << ass.substr(0, 1) << std::endl;
    return 0;
}