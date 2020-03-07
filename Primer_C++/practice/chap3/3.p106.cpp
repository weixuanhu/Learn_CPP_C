#include <string>
#include <iostream>
using namespace std;

int main(){
    int a[10] = {0};

    // the index of an array can 'out-of-range'
    // but only if it is not re-assigned

    int *end = &a[10];
    cout << a[11] << " ," << *end<< endl;

    // array index can be negative
    int *ptr = &(a[5]);
    ptr[-3] = 30;
    cout << a[2] << endl;
}

