#include <iostream>
using namespace std;

class Test1{
    public:
        Test1(){
            cout << "default Test1 constructor" << endl;
        }
        Test1(Test1 const &t){
            this->a = t.a; 
            cout << "copy constructor of Test1" << endl;
        }
        Test1 &operator = (Test1 const &t){
            this->a = t.a;
            cout << "assignment operator of Test1" << endl;
            return *this;
        }
    private:
        int a;
};

class Test2{
    public:
        Test2(Test1 const &t){
            test1 = t;
        }
    private:
        Test1 test1;
};

class Test3{
    public:
        Test3(Test1 const &t):test1(t){}
    private:
        Test1 test1;
};

int main(){
    Test1 t1;
    cout << endl;
    Test2 t2(t1);
    cout << endl;
    Test3 t3(t1);
}