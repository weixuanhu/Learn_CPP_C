#include <iostream>
using namespace std;

int main(int argc, char **argv){
    cout << "/*";                   // valid (surprisingly)
    cout << "*/";                   // valid (surprisingly)
    // cout << /* "*/" */           // invalid
    // cout << /* "*/" /* "/*" */;  // invalid
}