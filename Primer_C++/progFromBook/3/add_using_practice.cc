#include <iostream>
using std::cout; using std::cin;        // need to have semi-colon
using std::endl;

int main(int argc, char **argv){
    cout << "Enter two numbers: " << endl;
    int v1, v2;
    cin >> v1 >> v2;
    cout << "sum of " << v1 << " and " << v2 << 
        " is " << v1+v2 << endl;
    return 0;
}