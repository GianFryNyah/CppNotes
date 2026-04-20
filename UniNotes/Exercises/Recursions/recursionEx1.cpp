#include <iostream>
#include <vector>

int Sum(std::vector<int> myVector){
    if(!myVector.size()){return 0;}

    int sum;
    if(myVector.back()<=0){
        sum = 0;
    }
    else{sum = myVector.back();}

    myVector.pop_back();
    return sum + Sum(myVector); // "sommatoria"
}

int main(){
    std::vector<int> myVector = {13, -9, -3, 7, -99, 5, 2};
    int sumOfpositiveValues = 0;


    std::cout << Sum(myVector) << std::endl;
    return 0;
}