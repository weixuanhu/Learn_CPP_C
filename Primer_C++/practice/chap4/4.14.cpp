#include <iostream>
using namespace std;

int main(){
    int i;
    // error: const cannot be rvalue
    /*
    if (42 = i){
        cout << "it is here" << endl;
    }*/
    if ((i = 42)){
        cout << "it is there" << endl;
    }
    return 0;
}
