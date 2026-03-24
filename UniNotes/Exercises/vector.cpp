#include <iostream>
#include <vector>

bool isSorted(std::vector<int> &v){
    bool Sorted = true;
    for(int i = 0; i < (v.size()-1); i++){
        if(v.at(i) > v.at(i+1)){Sorted = false; break;}
    }
    return Sorted;
}

void mySort(std::vector<int> &v){
    int holder;
    while(!isSorted(v)){
        for(int i = 0; i < (v.size()-1); i++){
            if(v.at(i) > v.at(i+1)){holder = v.at(i); v.at(i) = v.at(i+1); v.at(i+1) = holder;}
        }
    }
}

void myInsertionSort(std::vector<int> &v){
    int holder;
    for(int i = (v.size()-1); i > 0; i--){
        for(int j = (v.size()-1); j > 0; j--){
            if(v.at(j) < v.at(j-1)){holder = v.at(j); v.at(j) = v.at(j-1); v.at(j-1) = holder;}
            else{continue;}
        }
    }
}

int main(){
    std::vector<int> v = {86, 62, 56, 80, 30, 75, 8, 91, 43, 60, 12, 20, 61, 11, 17, 78, 51, 5, 85, 9, 94,
                          47, 84, 93, 34, 72, 18, 16, 38, 54, 88, 6, 53, 44, 95, 35, 63, 98, 55, 27, 64, 71,
                          41, 83, 40, 32, 66, 7, 58, 70, 79, 1, 49, 73, 29, 22, 90, 24, 33, 82, 45, 23, 76,
                          59, 31, 26, 52, 67, 97, 69, 2, 42, 28, 21, 10, 50, 4, 68, 81, 25, 96, 74, 46, 3, 92,
                          89, 36, 37, 100, 13, 99, 57, 14, 48, 77, 87, 39, 65, 19, 15};
    
    myInsertionSort(v);
    // --> {1, 2, 3, 4, 5, 6, 7, 9}
    for(int i = 0; i < v.size(); i++){std::cout << v.at(i) << ' ';}
    std::cout << ' ' << std::endl;
    return 0;
}