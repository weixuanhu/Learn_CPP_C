#include <stdio.h>

#define myPrint(fmt, ...) printf(fmt, __VA_ARGS__)

int main(int argc, char* argv[]){
    char *test_string = "test_string";
    int test_int = 999;
    myPrint("%s is %d", test_string, test_int);
    return 0;
}