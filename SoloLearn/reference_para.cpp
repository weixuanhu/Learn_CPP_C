#include <iostream>
using namespace std;

int Increment_1(int& a){
    return(a+1);
}

int Increment_2(int& a){
    return ++a;
}

int main(){
    int a1 = 0;
    int a2 = 0;
    Increment_1(a1);
    Increment_2(a2);
    cout << a1 << endl;
    cout << a2 << endl;
}