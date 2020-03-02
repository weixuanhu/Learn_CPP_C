#include <iostream>
using namespace std;

static int i = 1;
 
int foo()
{
    i += 1;
    return i;
}

int main(){
    cout << foo() << endl;
    cout << foo() << endl;
    cout << foo() << endl;
}