#include <iostream>

int main(void){
    double x = 3.99;
    double y = 4;
    double z;
    z = std::max(x, y); // it returns the maximum value
    z = std::min(x, y);
    z = pow(x, y); // x elevated to y
    z = sqrt(y);
    z = ceil(x);   // it'll return 4
    z = floor(x);  // it'll return 3
    
    return 0;
}