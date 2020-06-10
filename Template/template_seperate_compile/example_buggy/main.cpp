/* 为什么编译器不能支持对模板的分离式编译?
 * 模板函数如果没有经过实例化，无法转换成二进制代码。所以f得不到实例化
 */

#include <iostream>
#include "formular.hpp"

int main(int argc, char* argv[]){
    double num1 = 3.14;
    double num2 = 5.62;
    /*
    std::cout << "The mean is: " << getMean(num1, num2) << std::endl;
    std::cout << "The range is: " << getRange(num1, num2) << std::endl;
    */
    std::cout << "The min is: " << getMin(num1, num2) << std::endl;
    return 0;
}