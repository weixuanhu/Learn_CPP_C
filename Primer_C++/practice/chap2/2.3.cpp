#include <iostream>

int main(int argc, char* argv[]){
    unsigned u = 10, u2 = 42;
    std::cout << "Length of int is: " << sizeof(int) << std::endl;

    std::cout << u2 - u << std::endl;       // guess: small
    std::cout << u - u2 << std::endl;       // guess: big

    int i = 10, i2 = 42;
    std::cout << i2 -i << std::endl;        // guess: small
    std::cout << i -i2 << std::endl;        // guess: small
    std::cout << i -u << std::endl;         // guess: small
    std::cout << u -i << std::endl;         // guess: small
}