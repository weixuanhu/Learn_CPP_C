#include <iostream>
using namespace std;

// Reference : http://blog.chinaunix.net/uid-1844931-id-3024630.html

void play(int& a, int& b){
    if (&a != &b){
        a ^= b;
        b ^= a;
        a ^= b;
        cout << a << ":" << b << endl;
    }
}

int main(){
    int a = 5;
    int b = 12;
    play(a, b);
}