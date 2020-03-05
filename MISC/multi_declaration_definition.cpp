#include <iostream>
using namespace std;

int main(int argc, char **argv){
    // Var to have multi declaration, is it OK ?
    int anInt;
    // int anInt        //  compile error: redeclaration of ‘int anInt’
    // float anInt;     //  conflicting declaration ‘float anInt’
    
    int aFun(char, float);
    int aFun(char, float);      // compile OK  
    // cannot distinguish overload functions by return type only
    // float aFun(char, float);    // compile error: ambiguating new declaration of ‘float aFun(char, float)’
    float aFun(char, int);      // function overload

    // var multi definition, is it OK ?
    int bInt;
    cout << "out: " << &bInt << endl;
    for (int i=0; i<10; i++){
        int bInt = i;
        cout << "in: " << &bInt << endl;
    }

    return 0;
}