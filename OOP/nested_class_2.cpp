// https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.1.0/com.ibm.zos.v2r1.cbclx01/cplr061.htm
#include <iostream>
using namespace std;

class A{
    private:
        int x;      // default access type is private
        class B{    // default access type is private
            public:
                B(){ cout << "in class B constructor" << endl; }
        };
    
    public:
        A(){ cout << "in class A constructor" << endl; }
        void displayA(){
            cout << x <<endl;
        }
        class C{
            // Compiler would not allow the following declaration
            // because A::B is private ? 
            // after coding, it turns out that b is accessible in C
            private:
                B b;
                int y;
            public:
                void f(A* p, int i){
                    // Compiler would not allow the following statement
                    // because A::x is private
                    // after coding, it turns out that x is accessible in C 
                p->x = i;
            }
        };

        void g(C* p){
            // Compiler would not allow the following statement
            // because C::y is private
            // after coding, confirmed that C::y is indeed inaccessible.
            // int z = p->y;
        }
};

int main(){
    A anA;
    anA.displayA();

    A::C aC;
    aC.f(&anA, 99);
    anA.displayA();

    return 0;
}