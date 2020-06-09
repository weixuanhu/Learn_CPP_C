#include <iostream>
using namespace std;
// compile error
int main(int argc, char* argv[]){
    int x=2;
    cout << x++++;
}