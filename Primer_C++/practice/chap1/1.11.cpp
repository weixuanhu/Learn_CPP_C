#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int base=0, top=10;
    cout << " This programe will print integer from " << base << " to " << top << endl;
    while(base<=top){
        cout << base << endl;
        ++base;
    }
}