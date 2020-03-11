#include <iostream>
using namespace std;

int main(){
    int i = 0;
    for(; i<5; i+=3){
        cout << i << endl;
        i = i* i;
    }
    cout << i;
}