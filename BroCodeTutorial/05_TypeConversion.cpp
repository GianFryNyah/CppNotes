#include<iostream>

int main(){
    // Conversion of a value from one data type to another
    //      Implicit conversion: automatic
    //      Explicit = (new_data_type) variable;

    int x = 3.14;
    std::cout << (double) x << '\n'; // 3.14 has been narrowed to 3 before

    char y = 100; // ASCII
    std::cout << y << '\n';

    int correct_answers = 173;
    int questions = 200;
    double score = correct_answers/(double)questions * 100;

    std::cout << score << "%" << std::endl;

    return 0;
}