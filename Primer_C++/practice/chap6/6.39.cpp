#include <string>
#include <iostream>

int calc(int a, int b){
    std::cout << b << std::endl;
    return b;
}
/* top-level const cannot be overload
int calc(const int a, const int b){
    std::cout << a << std::endl;
    return b;
}*/

int main(){
    std::cout << "this is a test" << std::endl;
    calc(5, 10);
    return 0;
}
