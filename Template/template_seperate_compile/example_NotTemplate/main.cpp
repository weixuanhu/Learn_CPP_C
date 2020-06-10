#include <iostream>
#include "formular.hpp"

int main(int argc, char* argv[]){
    double num1 = 3.14;
    double num2 = 5.62;
    std::cout << "The mean is: " << getMean(num1, num2) << std::endl;
    std::cout << "The range is: " << getRange(num1, num2) << std::endl;
    return 0;
}