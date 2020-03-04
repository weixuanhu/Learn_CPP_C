#include <iostream>
using namespace std;

// Reference: https://www.cprogramming.com/c++11/c++11-auto-decltype-return-value-after-function.html

class A {
    // default access specifier: private
    int foo_auto_int = 0;
    int foo_auto_ref = 0;
    int foo_auto_ptr = 0;

    public:
        A() { 
            cout << "foo_auto_int address is: " << &foo_auto_int << endl;
            cout << "foo_auto_ref address is: " << &foo_auto_ref << endl;
            cout << "foo_auto_ptr address is: " << &foo_auto_ptr << endl;
        }

        int getFoo_auto_int() {return foo_auto_int;}
        int& getFoo_auto_ref() {return foo_auto_ref;}
        int* getFoo_auto_ptr() {return &foo_auto_ptr;}
        
        void printFoo_auto_int() {cout << "foo_auto_int = " << foo_auto_int << endl; }
        void printFoo_auto_ref() {cout << "foo_auto_ref = " << foo_auto_ref << endl; }
        void printFoo_auto_ptr() {cout << "foo_auto_ptr = " << foo_auto_ptr << endl; }
};

int main(int argc, char **argv){
    A a;

    auto bar_auto_int = a.getFoo_auto_int();
    auto& bar_auto_ref = a.getFoo_auto_ref();
    auto bar_auto_ptr = a.getFoo_auto_ptr();

    cout << "bar_auto_int address is: " << &bar_auto_int << endl;
    cout << "bar_auto_int address is: " << &bar_auto_ref << endl;
    cout << "bar_auto_ptr point to address: " << &(*bar_auto_ptr) << endl;

    ++bar_auto_int;
    ++bar_auto_ref;
    ++(*bar_auto_ptr);

    a.printFoo_auto_int();
    a.printFoo_auto_ref();
    a.printFoo_auto_ptr();

    return 0;
}