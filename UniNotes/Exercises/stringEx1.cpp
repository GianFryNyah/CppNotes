#include <iostream>

int vowelsCounter(std::string Input){
    int cnt = 0;
    for(int i = 0; i < Input.length(); i++){
        switch(Input.at(i)){
            case 'a':
                cnt++;
                break;
            case 'e':
                cnt++;
                break;
            case 'i':
                cnt++;
                break;
            case 'o':
                cnt++;
                break;
            case 'u':
                cnt++;
                break;
        }
    }
    return cnt;
}

int main(){
    // Write a function that, given a string, returns the number of vowels
    // (a, e, i, o, u — both lowercase and uppercase) it contains.
    // Expected output: 3

    std::string Input = "Hello World";
    std::cout << vowelsCounter(Input) << std::endl;
    
    return 0;
}