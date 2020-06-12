// compile error because of 're-definition' of class
// in all headers there are 'definition', not only 'declaration'

#include "headerA.hpp"
#include "headerB.hpp"
#include <iostream>

int main(){
    std::cout << "hello" << std::endl;
    return 0;
}