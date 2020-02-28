#include <iostream>
using namespace std;

class aClass{
    private:
        aClass() { 
            cout << "This is a private constructor " << endl;
        }
        void printSome() {
            cout << "privately print something " << endl;
        }
    public:
        aClass(int anInt) {
            cout << "This is a public constructor " << endl;
        }
};

int main(int argc, char **argv){
    // compile error
    // aClass Test1;

    // compile OK
    aClass Test2(10);
    Test2.printSome();
}