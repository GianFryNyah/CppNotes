#include <iostream>
#include <vector>

void myTransposition(std::vector<std::vector<int>> &matrix){
    int holder;
    for(int i = 0; i < matrix.size(); i++){
        for(int j = i; j < matrix[0].size(); j++){
            holder = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = holder;
        }
    }

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << ' ' << std::endl;
}

int main(){
    std::vector<std::vector<int>> matrix = {{1, 2, 3},
                                            {4, 5, 6},
                                            {7, 8, 9}};
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << ' ' << std::endl;

    myTransposition(matrix);

    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << '\n';
    }
    std::cout << ' ' << std::endl;

    return 0;
}