#include <iostream>

int main(void){
    // break = break out of a loop
    // continue = skip current iteration

    std::cout << 0;
    for(int i = 1; i <= 10; i++){
        if(i == 6){continue;}
        std::cout << " - " << i;
    }
    std::cout << ' ' << std::endl;

    std::cout << 0;
    for(int i = 1; i <= 10; i++){
        if(i == 6){break;}
        std::cout << " - " << i;
    }
    std::cout << ' ' << std::endl;
    return 0;
}