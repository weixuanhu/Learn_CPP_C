#include <stdio.h>

int main(){
    printf("%d", 5);
    // if you didn't use fflush, the '5' will not print.
    fflush(stdout);
    int c = 1/0;
    return 0;
}