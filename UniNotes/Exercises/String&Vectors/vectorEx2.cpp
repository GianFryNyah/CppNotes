#include <iostream>
#include <vector>

bool even(int x){
    if(x%2){return false;}
    return true;
}

std::vector<int> myNewhEaVEN(std::vector<int> Input){
    // size_t used instead of int type for an experiment
    // please don't judge me since I may start to cry
    std::vector<int> newInput(Input.size());
    size_t cnt = 0;
    size_t j = 0;
    for(size_t i = 0; i < Input.size(); i++){
        if(!((Input.at(i))%2)){newInput.at(j) = Input.at(i); cnt++; j++;}
    }
    newInput.resize(cnt);
    return newInput;
}

int main(){
    // Write a function that, given a vector of integers, returns a NEW vector
    // containing only the even elements, preserving their order.
    std::vector<int> Input = {1, 2, 3, 4, 5, 6, 7, 8};
    for(int i=0; i<Input.size(); i++){std::cout<<Input.at(i)<<' ';}
    std::cout << ' ' << std::endl;

    std::vector<int> newInput = myNewhEaVEN(Input);
    for(int i=0; i<newInput.size(); i++){std::cout<<newInput.at(i)<<' ';}
    std::cout << ' ' << std::endl;
    return 0;
}