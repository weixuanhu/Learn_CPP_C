// Reference: https://blog.csdn.net/ws1347913745/article/details/8682331
#include <iostream>
using namespace std;

class B{
    public:
        B(){
            cout << " B() is called " << endl;
        }
        B(int i){
            cout << " B(" << i << ") is called " << endl;
        }
};

class A{
    public:
        A(){
            cout << " A() is called " << endl;
        }
    private:
        B b;
};

class A2{
    public:
        A2():b(12345){
            cout << " A() is called " << endl;
        }
    private:
        B b;
};

class A3{
    public:
        A3(){
            b = 12345;
            cout << " A() is called " << endl;
        }
    private:
        B b;
};
int main(){
    A a;
    cout << endl;
    A2 a2;
    cout << endl;
    A3 a3;    
}