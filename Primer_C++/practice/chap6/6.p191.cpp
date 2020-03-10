#include <iostream>
using namespace std;
void fcn(const int i){
    cout << "const int i" << i << endl; 
}

/* 'int i' and 'const int i' cannot overload each other
void fcn(int i){
    cout << "int i" << endl;
}*/

int main(){
    int anInt = 5;
    const int anConstInt = 9;
    fcn(anConstInt);
}