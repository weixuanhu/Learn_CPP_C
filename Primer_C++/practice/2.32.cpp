#include <iostream>

int main(){
    // Error: cannot assign type "int" to type "int *"
    // int null = 0, *p = null;

    int null = 0, *p = &null;
    std::cout << "address of p is : " << p << std::endl;

    // Or:
    int *p_temp = nullptr;
    std::cout << "address of p_temp is : " << p_temp << std::endl;

    return 0;
}