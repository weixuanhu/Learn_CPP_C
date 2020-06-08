#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    int a=8;
    int x=4;
    int y=++x+(a%x*a/x);
    cout << "x = " << x << endl;
    return 0;
}