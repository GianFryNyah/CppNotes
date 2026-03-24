#include <iostream>

void MyLowerKaiser(std::string &Input){
    for(int i = 0; i < Input.length(); i++){
        Input.at(i) = tolower(Input.at(i));
    }
}

int main(){
    // Write a function that converts all uppercase letters of a string to
    // lowercase, modifying the string in place.
    std::string Input = "Hello World";
    MyLowerKaiser(Input);
    std::cout << Input << std::endl;
    return 0;
}