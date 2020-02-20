#include <iostream>

int main(){
    int ival = 1.01;    // this is OK
    std::cout << "int ival is : " << ival << std::endl;

    /*
    int &rval1 = 1.01;  // Not OK. Reference must bind with object
    std::cout << "int &rval1 is : " << rval1 << std::endl;
    */

    int &rval2 = ival;  // this is OK
    std::cout << "int &rval2 is : " << rval2 << std::endl;

    /*
    int &rval3;         // Not OK. Reference must be initialized
    */

    int &Ref2Ref = rval2;
    std::cout << "int &Ref2Ref is : " << Ref2Ref << std::endl;

}