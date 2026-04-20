#include <iostream>

std::string ciphred(std::string Input, int offset){
    std::string nInput = "";
    char newC;
    for(int i = 0; i < Input.length(); i++){
        char c = Input.at(i);
        int s = offset % 26;

        if(c >= 'a' && c <= 'z'){
            if((c+s) > 'z'){
                newC = ((c+s) % 'z') + ('a' - 1);
                nInput.append(1, newC);
            }
            else{
                newC = (c+s);
                nInput.append(1, newC);
            }
        }
        else if(c >= 'A' && c <= 'Z'){
            if((c+s) > 'Z'){
                newC = ((c+s) % 'Z') + ('A' - 1);
                nInput.append(1, newC);
            }
            else{
                newC = (c+s);
                nInput.append(1, newC);
            }
        }
        else{
            newC = Input.at(i);
            nInput.append(1, newC);
        }
    }
    return nInput;
}

int main(){
    std::string Input = "Hello, World!";
    int offset = 3;

    std::cout << ciphred(Input, offset) << std::endl;
    return 0;
}