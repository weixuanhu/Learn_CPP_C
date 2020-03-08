#include <iostream>
using namespace std;

int main(){
    int a = 40;
    int *ptr = &a;
    a++;
    cout << *ptr << endl;
}
