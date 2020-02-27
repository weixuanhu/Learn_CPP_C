#include <iostream>
using namespace std;

int Sum(int a=3, int b=8){
    return a+b;
}

int main(int argc, char **argv){
    int b=11;
    cout << Sum(b) << endl;
    return 0;
}