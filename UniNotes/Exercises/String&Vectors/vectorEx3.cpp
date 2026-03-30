#include <iostream>
#include <vector>

bool duplicated(int value, std::vector<int> myVector){
    for(int i = 0; i < myVector.size(); i++){
        if(myVector.at(i) == value){return true;}
    }
    return false;
}

std::vector<int> duplicatesFinalRemover(std::vector<int> Input){
    std::vector<int> newInput(Input.size());
    int j = 1;
    newInput.at(0) = Input.at(0);

    for(int i = 1; i < Input.size(); i++){
        if(duplicated(Input.at(i), newInput)){continue;}
        else{newInput.at(j) = Input.at(i); ++j;}
    }

    newInput.resize(j);
    return newInput;
}

int main(){
    // Write a function that, given a vector of integers, returns a NEW vector
    // with all duplicate elements removed. The first occurrence of each element
    // must be preserved, and the relative order of elements must not change.
    std::vector Input = {3, 1, 4, 1, 5, 3, 2, 4};
    std::vector newInput = duplicatesFinalRemover(Input);
    for(int i=0; i<newInput.size(); i++){std::cout<<newInput.at(i)<<' ';}
    std::cout << ' ' << std::endl;
    return 0;
}