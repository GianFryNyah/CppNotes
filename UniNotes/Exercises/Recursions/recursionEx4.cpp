#include <iostream>

bool isVowel(char c){
    switch(tolower(c)){
        case 'a': return true;
        case 'i': return true;
        case 'u': return true;
        case 'e': return true;
        case 'o': return true;
    }
    return false;
}

int vowelsCounter(std::string s){
    if(!s.size()){return 0;}

    if(isVowel(s.back())){
        s.pop_back();
        return vowelsCounter(s) + 1;
    }
    else{
        s.pop_back();
        return vowelsCounter(s) + 0;
    }
}

int main(){
    std::string s = "Sono stanco voglio andare a dormire";
    std::cout << "La stringa: " << '"' << s << '"' << " contiene " << vowelsCounter(s) << " vocali" << std::endl;
    return 0;
}