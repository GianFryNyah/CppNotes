#include <iostream>

int myWordCounter(std::string Input){
    int cnt = 0;
    bool word = false;
    int size = Input.length();
    for(int i = 0; i < Input.length(); i++){
        while((Input.at(i) != ' ') && (i<(size-1))){i++; word = true;}
        if(word){cnt++; word = false;}
    }
    return cnt;
}

int main(){
    // Write a function that, given a string, returns the number of words it
    // contains. Words are separated by spaces. You can assume there are no
    // leading, trailing, or consecutive spaces.
    std::string Input = "the quick brown fox";
    std::cout << myWordCounter(Input) << std::endl;
    return 0;
}