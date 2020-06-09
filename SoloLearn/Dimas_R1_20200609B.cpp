#include <iostream>
using namespace std;

// what is the output of the following code ?

void func(int x){
    if (x>0){
        func(--x);
        cout << x;
    }
    else{
        return;
    }
}

int main(int argc, char* argv[]){
    func(5);
    return 0;
}