#include <iostream>
#include <vector>

void myReverser(std::vector<int> &Input){
    int nSize = Input.size() / 2;
    int holder;
    for(int i = 0, j = (Input.size()-1); i < nSize; i++, j--){
        holder = Input.at(i); Input.at(i) = Input.at(j); Input.at(j) = holder;
    }
}

int main(){
    // Write a function that reverses the elements of a vector of integers
    // IN PLACE (i.e., without creating a new vector).
    // {1, 2, 3, 4, 5} --> {5, 4, 3, 2, 1}
    std::vector<int> Input = {1, 2, 3, 4, 5};

    for(int i=0; i<Input.size(); i++){std::cout<<Input.at(i)<<' ';}
    std::cout << ' ' << std::endl;

    myReverser(Input);
    
    for(int i=0; i<Input.size(); i++){std::cout<<Input.at(i)<<' ';}
    std::cout << ' ' << std::endl;

    return 0;
}