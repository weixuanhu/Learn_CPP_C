#include <iostream>
using namespace std;

int main(int argc, char **argv){
    const char *p = "12345";
    const char **q = &p;
    *q = "abcde";
    const char *s = ++p;
    p = "XYZWVU";
    cout << *++s;
}