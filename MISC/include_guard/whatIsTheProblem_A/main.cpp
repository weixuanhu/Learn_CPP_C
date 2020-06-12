// compile OK because in all headers there are only declarations, no definition.

#include "headerA.hpp"
#include "headerB.hpp"
#include <iostream>

int main(){
    std::cout << "hello" << std::endl;
    return 0;
}