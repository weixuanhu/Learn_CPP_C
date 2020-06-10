#include <iostream>
using namespace std;

// what is the output of the following code ?

class A{
    public:
        ~A(){
            cout << ':';
        }
};

class B:A{
    public:
        ~B(){
            cout << '(';
        }
};

int main(int argc, char *argv[]){
    B obj;
    return 0;
}