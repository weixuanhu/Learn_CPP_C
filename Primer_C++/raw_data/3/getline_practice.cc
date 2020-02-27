#include <iostream>
#include <string>

int main(int argc, char **argv){
    std::string s;
    while (getline(std::cin, s)){
        std::cout << s << std::endl;
        if (s == "hwx") {
            break;
        }
    }
}