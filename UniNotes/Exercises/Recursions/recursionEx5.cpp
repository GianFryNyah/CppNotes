#include <iostream>
// Inverti i caratteri di una stringa
std::string sInverterR(std::string s, std::string toReturn){
    if(!s.size()){return toReturn;}
    toReturn += s.back();
    s.pop_back();
    return sInverterR(s, toReturn);
}

std::string sInverter(std::string s){
    std::string toReturn = "";
    return sInverterR(s, toReturn);
}

int main(){
    std::string s = "Inversion";
    char ss = s.back();
    std::cout << ss << std::endl;
    std::cout << sInverter(s) << std::endl;
}