#include <iostream>

int main(void){
    std::cout << 0;
    for(int i = 1; i <= 10; i++){
        std::cout << " - " << i;
    }
    std::cout << ' ' << std::endl;
}