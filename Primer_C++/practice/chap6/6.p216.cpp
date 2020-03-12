#include <iostream>
using namespace std;
void testFunc(){
    cerr << "function is : " << __func__ << endl
            << "at line : " << __LINE__ << endl
            << "compiled on " << __DATE__ << endl
            << "at time : " << __TIME__ << endl;
}

int main(){
    testFunc();
}