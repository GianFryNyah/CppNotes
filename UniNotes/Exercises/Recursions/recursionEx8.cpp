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


int main(){
    std::string s = "Viva l'Amianto Sempre";
    bulldozer(s);
    std::cout << s << std::endl;
    return 0;
}