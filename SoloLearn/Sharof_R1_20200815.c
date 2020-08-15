#include <stdio.h>
#define arraySize 50
int main(){
    int arr[arraySize] = {0, 1, 2, [47] = 47, 48, 49};
    for (int i = 0; i < arraySize; i++)
    {
        /* Compiler dependent: gpp compile error, gcc compile pass */
        printf("idx:%d, element:%d\n", i, arr[i]);
    }
    return 0;
}