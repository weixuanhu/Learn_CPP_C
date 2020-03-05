#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int val=0, base=0, top=10;
    cout << " This programe will calculte the sum from " << base << " to " << top << endl;
    while(base<=top){
        val += top;
        --top;
    }
    cout << " The sum is " << val << endl;
}