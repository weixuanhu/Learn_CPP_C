#include <iostream>
using namespace std;

/*
以下几种情况时必须使用初始化列表
常量成员，因为常量只能初始化不能赋值，所以必须放在初始化列表里面
引用类型，引用必须在定义的时候初始化，并且不能重新赋值，所以也要写在初始化列表里面
没有默认构造函数的类类型，因为使用初始化列表可以不必调用默认构造函数来初始化，而是直接调用拷贝构造函数初始化。
*/

class Test1{
    public:
        Test1(int a):anInt(a){}
    private:
        int anInt;
};

/*
class Test2{
    public:
        Test2(Test1 const &t){
            test1 = t;
        }
    private:
        Test1 test1;
};
*/

class Test3{
    public:
        Test3(Test1 const &t): test1(t) {}
    private:
        Test1 test1;
};
int main(){
    Test1 t1(10);
    // compile error because there is no default constructor of Test1
    // Test2 t2(t1);

    Test3 t3(t1);
}