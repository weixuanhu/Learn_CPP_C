#include <stdio.h>
#include <cstdlib>
#define size 10
int main(){
    /* https://stackoverflow.com/questions/15824408/incomplete-type-is-not-allowed-while-trying-to-create-an-array-of-pointers */
    /* compile error */
    int* list1[];
    list1 = new int[size];
    return 0;
}