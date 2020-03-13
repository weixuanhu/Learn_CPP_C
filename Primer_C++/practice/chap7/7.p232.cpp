#include <iostream>
using namespace std;

class Test{
    public:
        int anInt = 5;
        void printConst() const {
            cout << "const member function " << endl;
        }
        void printNonConst() {
            cout << "Non-const member function " << endl;
        }
};

int main(){
    Test NonConstT;
    const Test ConstT;

    Test &RefNonConstT = NonConstT;
    Test *PtrNonConstT = &NonConstT;

    const Test &RefConstT = ConstT;
    const Test *PtrConstT = &ConstT;

    NonConstT.printConst();
    NonConstT.printNonConst();
    RefNonConstT.printConst();
    RefNonConstT.printNonConst();
    PtrNonConstT->printConst();
    PtrNonConstT->printNonConst();

    ConstT.printConst();
    // ConstT.printNonConst();      // invalid function call
    RefConstT.printConst();
    // RefConstT.printNonConst(); // invalid function call 
    PtrConstT->printConst();
    // PtrConstT->printNonConst(); // invalid function call

}
