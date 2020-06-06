#include <iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "World";
        }
        class B{
            public:
                B(){
                    cout << "Hello";
                }
        };
};

int main(){
    A::B obj;
    return 0;
}
