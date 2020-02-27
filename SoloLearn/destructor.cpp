#include <iostream>
#include <typeinfo>
using namespace std;
/* test */

class A {
    public:
        A(int i):i(i) {cout << i;}
        ~A() {cout << i + 5;}
    private:
        int i;
};//

int main(int argc, char **argv){
    cout << endl;
    const A &x = A(1);
    cout << "\n" << typeid(x).name() << endl;
}