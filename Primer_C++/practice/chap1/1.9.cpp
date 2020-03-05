#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int val=0, base=50, top=100;
    cout << " This programe will calculte the sum from " << base << " to " << top << endl;
    while(base<=top){
        val += base;
        ++base;
    }
    cout << " The sum is " << val << endl;
}