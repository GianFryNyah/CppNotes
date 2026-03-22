#include <iostream>

int main(void){
    int dayOfweek;
    std::cout << "Enter the day of the week [1-7]: ";
    std::cin >> dayOfweek;

    switch(dayOfweek){
        case 1:
            std::cout << "It's Monday!" << std::endl;
            break;
        case 2:
            std::cout << "It's Tuesday!" << std::endl;
            break;
        case 3:
            std::cout << "It's Wednesday!" << std::endl;
            break;
        case 4:
            std::cout << "It's Thursday!" << std::endl;
            break;
        case 5:
            std::cout << "It's Friday!" << std::endl;
            break;
        case 6:
            std::cout << "It's Saturday!" << std::endl;
            break;
        case 7:
            std::cout << "It's Sunday!" << std::endl;
            break;
        default:
            std::cout << "You've entered an invalid value!" << std::endl;
            break;
    }

    return 0;
}