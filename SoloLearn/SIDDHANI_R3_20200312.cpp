#include <iostream>
using namespace std;

class A{
    public:
        void f() {cout << 1 << endl;}
};

class B: public A{
    private:
        void f() {cout << 2;}
};

void c(A &a){a.f();}

int main(){
    B b;
    c(b);
}