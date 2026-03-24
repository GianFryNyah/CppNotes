#include <iostream>
#include <vector>
// typedef is a reserved keyword
// It's used to create additional names (alias) for another data type.
// Helps with readability and reduces types
// Replaced with 'using" (works better with templates)
// To use only when there's a clear benefit

typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
typedef int esempio_t;
using text_t = std::string;
using number_t = int;

int main(void){
    pairlist_t pairlist = {{"Programming's Introduction final vote", 32}};
    std::cout << pairlist.at(0).first << ':' << ' ' << pairlist.at(0).second << std::endl;

    text_t firstName = "Germano"; text_t lastName = "Mosconi";
    std::cout << firstName << ' ' << lastName << std::endl;

    esempio_t esempio = 10;
    std::cout << esempio << std::endl;

    return 0;
}