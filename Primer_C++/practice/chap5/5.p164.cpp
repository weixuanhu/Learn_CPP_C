#include <iostream>
using namespace std;

int main(){
    int ix = 10;
    switch(ix){
        case 20:
            int iy = 5;
            cout << ix + iy << endl;
            break;
        case 10:
            iy = 6;
            cout << ix - iy << endl;
            break;
        default:
            break;
    }
    return 0;
}
