// https://www.geeksforgeeks.org/dsa/cpp-program-to-print-all-permutations-of-a-given-string/

#include <iostream>

void swapper(std::string &s, int i, int j){
    char holder = s.at(i);
    s.at(i) = s.at(j);
    s.at(j) = holder;
    return;
}

void Rpermutator(std::string s, int index){
    if(index == s.size()){
        std::cout << s << ' ';
    }

    for(int i = index; i < s.size(); i++){
        swapper(s, index, i);
        Rpermutator(s, index+1);
        swapper(s, index, i);
    }
}

void permutator(std::string s){
    int index = 0;
    Rpermutator(s, 0);
    std::cout << "" << std::endl;
    return;
}

int main(){
    std::string s = "abcdefg";
    std::cout << s << std::endl;
    permutator(s);
    return 0;
}