#include <stdio.h>

// which of the 4 statement cannot represent the full precision of x ?
int main(int argc, char* argv[]){
    float x = 2.12;
    printf("x=%5.0f\n",x);  // should be "    2"
    printf("x=%f\n",x);     // should be "2.12"
    printf("x=%lf\n",x);    // should be "2.12"
    printf("x=%0.5f\n",x);  // should be "2.12000"
    return 0;
}