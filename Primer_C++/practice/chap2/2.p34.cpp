#include <iostream>
#include <bitset>
using namespace std;

int main(int argc, char **argv){
    // in expression 'signed' will be cast to 'unsigned'
    unsigned u = 10;
    int i = -42;
    // cout << bitset<sizeof(int)*8>(i) << endl;        // display bits
    cout << i + i << endl;
    cout << u + i << endl;

    // for 'unsigned' - 'unsigned' the result must > 0
    unsigned u1 = 42, u2 = 10;
    cout << u1 - u2 << endl;
    cout << u2 - u1 << endl; 
}