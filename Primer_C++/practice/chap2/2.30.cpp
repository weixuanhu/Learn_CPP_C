#include <iostream>

int main(){
    const int v2 = 0;       // v2 is a high-level const
    int v1 = v2;            // v1 is Not a const
    int *p1 = &v1;          // p1 is Not a const
    int &r1 = v1;           // r1 is Not a const
    const int *p2 = &v2;    // p2 is a low-level const
    const int &r2 = v2;     // r2 is a low-level const

    /* https://stackoverflow.com/questions/13061450/pointer-to-const-can-point-to-non-const-object-language-design-or-technical-re
    a pointer to a const says, "please guarantee that the value of j does not change via q". 
    Note that the via q is important because the pointer to const declaration doesn't mean that the value pointed to must be a constant, 
    only that whoever is using the pointer can't use the pointer to change the value. */
    int i = 9;
    const int *const p3 = &i;   //No Error. p3 is a high-level or low-level const

    /* "please guarantee that the value of i doesn't change", 
    but in the second line the compiler can no longer make that guarantee - the type information on the pointer p is not strict enough
     to tell the compiler not to allow changes to the pointed-to value i.   */
    // const int i_test = 9;
    // int *p3_test = &i_test;     // Error.    

    return 0;
}