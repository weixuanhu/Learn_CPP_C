#include <iostream>

int main(){
    // &r = 0 error because 0 is const, but &r is not const
    // 0 is not an object, reference must refers an object
    // int i = -1, &r = 0;     // Not OK
    
    // this is OK
    int i2 = 10;
    int *const p2 = &i2;

    // this is OK
    const int i3 = -1, &r3 = 0;   
    
    // this is OK
    int i4 = 4;
    const int *const p4 = &i4;

    // this is OK
    int i5 = 5;
    const int *p1 = &i5;

    // invalid
    // const int i6 = 6;
    // const int &const r6 = i6;

    // 
    int i7_a = 7;
    const int i7 = i7_a, &r = i7_a;

    return 0;
}