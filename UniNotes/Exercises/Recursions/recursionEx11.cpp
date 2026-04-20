#include <iostream>
#include <cmath>

int ExDict(char d){
    switch(toupper(d)){
        case 'A': return 10; case '1': return 1; case '7': return 7;
        case 'B': return 11; case '2': return 2; case '8': return 8;
        case 'C': return 12; case '3': return 3; case '9': return 9;
        case 'D': return 13; case '4': return 4;
        case 'E': return 14; case '5': return 5;
        case 'F': return 15; case '6': return 6;
    }
    return 0;
}

int RexdConverter(std::string exd, int n){
    if(!exd.size()){return 0;}
    int decSum = ExDict(exd.back()) * pow(16, n);
    exd.pop_back();
    return decSum + RexdConverter(exd, n+1);
}

int exdConverter(std::string exd){
    int n = 0;
    return RexdConverter(exd, n);
}

int main(){
    std::string exd = "1AA"; // 0x1A == 26
    int dec = exdConverter(exd);
    std::cout << "0x" << exd << " value in decimal base is equal to " << dec << std::endl;
}