#include <iostream>
#include <vector>

void myTransposition(std::vector<std::vector<int>> &matrix){
    int holder;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = i; j < matrix.at(0).size(); j++){
            holder = matrix.at(i).at(j);
            matrix.at(i).at(j) = matrix.at(j).at(i);
            matrix.at(j).at(i) = holder;
        }
    }
}

int main(){
    std::vector<std::vector<int>> matrix = {{1, 2, 3, 4},
                                            {5, 6, 7, 8},
                                            {9, 10, 11, 12},
                                            {13, 14, 15, 16}};
    
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix.at(0).size(); j++){
            std::cout << matrix.at(i).at(j) << ' ';
        }
        std::cout << '\n';
    }
    std::cout << ' ' << std::endl;

    myTransposition(matrix);

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix.at(0).size(); j++){
            std::cout << matrix.at(i).at(j) << ' ';
        }
        std::cout << '\n';
    }
    std::cout << ' ' << std::endl;

    return 0;
}