#include <iostream>
#include <vector>

std::vector<int> myFUN(std::vector<int> Input1, std::vector<int> Input2){
    int size1 = Input1.size(); int size2 = Input2.size();
    std::vector<int> newInput(size1+size2);
    
    int j = 0;
    for(int i = 0; i < size1; i++){
        if(Input1.at(i) >= Input2.at(i)){
            newInput.at(j) = Input2.at(i);
            newInput.at(j+1) = Input1.at(i);
            j+=2;
        }
        else{
            newInput.at(j) = Input1.at(i);
            newInput.at(j+1) = Input2.at(i);
            j+=2;
        }
    }

    return newInput;
}

int main(){
    std::vector<int> Input1 = {1, 3, 5, 9};
    std::vector<int> Input2 = {2, 4, 6, 8};

    std::vector newInput = myFUN(Input1, Input2);
    for(int i=0; i<newInput.size(); i++){std::cout<<newInput.at(i)<<' ';}
    std::cout << ' ' << std::endl;

    return 0;
}