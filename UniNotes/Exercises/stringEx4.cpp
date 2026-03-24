#include <iostream>

bool myPalindrome(std::string Input){
    int sizeToCheck = Input.size() / 2;

    for(int i = 0, j = (Input.size()-1); i <= sizeToCheck; i++, j--){
        if(tolower(Input.at(i)) != tolower(Input.at(j))){return false;}
    }
    return true;
}

int main(){
    // Write a function that, given a string, returns true if the string is a
    // palindrome and false otherwise. The check must be case-insensitive, so
    // "Racecar" and "racecar" are both palindromes.
    std::string Input1 = "racecar";
    std::string Input2 = "Racecar";
    std::string Input3 = "hello";
    std::string Input4 = "lacarannaracal";
    (myPalindrome(Input1)) ? (std::cout << Input1 << " is palindrome") : (std::cout << Input1 << " isn't palindrome"); std::cout << ' ' << std::endl;
    (myPalindrome(Input2)) ? (std::cout << Input2 << " is palindrome") : (std::cout << Input2 << " isn't palindrome"); std::cout << ' ' << std::endl;
    (myPalindrome(Input3)) ? (std::cout << Input3 << " is palindrome") : (std::cout << Input3 << " isn't palindrome"); std::cout << ' ' << std::endl;
    (myPalindrome(Input4)) ? (std::cout << Input4 << " is palindrome") : (std::cout << Input4 << " isn't palindrome"); std::cout << ' ' << std::endl;
    return 0;
}