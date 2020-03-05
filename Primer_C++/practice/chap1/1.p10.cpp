#include <iostream>
using namespace std;

int main(int argc, char **argv){
    cout << " This programe will calculte the sum from 1 to 10 " << endl;
    int val=0, base=1, top=10;
    while(base<=top){
        val += base;
        ++base;
    }
    cout << " The sum is " << val << endl;
}