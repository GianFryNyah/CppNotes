#include <iostream>
#include <vector>

bool EqCheck(std::vector<int> X, std::vector<int> Y) {
    if(!X.size() && !Y.size()){return true;}
    else if(!X.size() && Y.size() || X.size() && !Y.size()){return false;}
    if(!(X.back() == Y.back())){return false;}
    else{
        X.pop_back(); Y.pop_back();
        return EqCheck(X, Y);
    }
}

int main(){
    std::vector<int> X = {1, 43, 64};
    std::vector<int> Y = {1, 43, 64};
    if(EqCheck(X, Y)){std::cout << "I vettori X ed Y sono uguali!" << std::endl;}
    else{std::cout << "I vettori X ed Y NON sono uguali!" << std::endl;}
    return 0;
}