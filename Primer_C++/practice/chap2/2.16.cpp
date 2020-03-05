#include <iostream>

int main(){
    int i = 8, &r1 = i;
    double d = 4.78, &r2 = d;

    r2 = 3.14159;       // this is OK
    std::cout << " i, r1, d, r2 are respectively: " << i << " ," << r1 << " ," << d << " ," << r2 << std::endl;

    r2 = r1;            //
    std::cout << " i, r1, d, r2 are respectively: " << i << " ," << r1 << " ," << d << " ," << r2 << std::endl;

    i = r2;             //
    std::cout << " i, r1, d, r2 are respectively: " << i << " ," << r1 << " ," << d << " ," << r2 << std::endl;

    r1 = d;             //
    std::cout << " i, r1, d, r2 are respectively: " << i << " ," << r1 << " ," << d << " ," << r2 << std::endl;
}