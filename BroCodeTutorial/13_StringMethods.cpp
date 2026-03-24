#include <iostream>

int main(void){
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // because name could contain spaces/tabs//n

    if(name.length() > 20){
        std::cout << "Your name can't be over 20 characters!" << std::endl;
        return 0;
    }
    else if(name.empty()){
        std::cout << "You didn't enter any name!" << std::endl;
        return 0;
    }
    else{
        std::cout << "Welcome " << name << '!' << std::endl;
    }
    
    name.append("@gmail.com");
    auto space_index = name.find(' '); // It returns the index of the first occurrence, else it returns string::npos (-1)
    if(space_index != -1){name.erase(name.find(' '), 1);} // it erase a portion of a string by passing a begginning index and the number of characters to erase
    for(int x = 0; x < name.length(); x++){
        name.at(x) = (char)tolower(name.at(x));
    }
    std::cout << "Your given email is: " << name << std::endl;

    std::cout << "Your first character is: " << (char)toupper(name.at(0)) << std::endl;

    name.insert(8, "."); // Inserts a string on a specific index

    name.clear(); // it clears out name content
    std::cout << "If nothing appears, your name has been successfully cleared out: " << name << std::endl;

    // cycling through characters
    char nChoice;
    char choice = 'z';
    int size = 53;

    size = size%26;
    if(choice + size > 'z'){
        nChoice = ((choice+size)%'z')+('a'-1);
    }
    else{nChoice = choice + size;}

    std::cout << nChoice << ' ' << (int)'a' << ' ' << (int)'z' << std::endl;
    // end
    
    return 0;
}