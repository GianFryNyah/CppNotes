#include <iostream>

void swapper(std::string &s, int i, int j){
    char holder = s.at(i);
    s.at(i) = s.at(j);
    s.at(j) = holder;
    return;
}

void Rbulldozer(std::string &s, int i, int j){
    if(i > j){return;}
    swapper(s, i, j);
    Rbulldozer(s, i+1, j-1);
}

void bulldozer(std::string &s){
    int i = 0; int j = s.length()-1;
    Rbulldozer(s, i, j);
    return;
}

///////////////////////////////////////////////////////////////////////////////////////

std::string RDectoBin(std::string Bin, size_t Dec){
    if(Dec == 0){bulldozer(Bin); return Bin;}
    int digit = Dec % 2;
    Bin.append(std::to_string(digit));
    return RDectoBin(Bin, Dec/2);
}

std::string DectoBin(size_t Dec){
    std::string Bin = "";
    return RDectoBin(Bin, Dec);
}

int main(){
    size_t toBin = 7583958499; // 27%2 - 13%2 - 6%2 - 3%2 - 1%2 - 0 | 11011 - 11011 |
    int test = toBin % 2;
    std::string ss = std::to_string(test);
    std::cout << DectoBin(toBin) << std::endl;
    return 0;
}