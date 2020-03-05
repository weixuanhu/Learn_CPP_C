#include <iostream>
#include <fstream>
using namespace std;

/* Compile error: named return values are no longer supported
// function definition must have closed brackets
int Sum_Invalid(int a=3, int b=8)
    return a+b;
*/

int Sum_Valid(int a=3, int b=8){
    return a+b;
}

int main(int argc, char **argv){
    int b=11;
    cout << Sum_Valid(b) << endl;
    return 0;
}