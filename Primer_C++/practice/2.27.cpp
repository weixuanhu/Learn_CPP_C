#include <iostream>

int main(){
    //  &r = 0 error because 0 is const, but &r is not const
    // int i = -1, &r = 0;     // Not OK
    
    int i = -1;
    const int &r = 0;           // this is OK

    int i2 = 9;
    int *const p2 = &i2;        // this is OK

    const int i = -1, &r = 0;   // this is OK
    const int *const p3 = 

    return 0;
}