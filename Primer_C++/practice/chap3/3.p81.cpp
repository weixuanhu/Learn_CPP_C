#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
    string s1 = "Hello", s2 = "World";
    string s3 = s1 + "," + s2 + '\n';
    string s4 = s1 + ","; // valid
    // string s5 = "hello" + ", "; // invalid
    string s6 = s1 + ", " + "world"; // valid
    // string s7 = "hello" + ", " + s2; // invalid
    return 0;
}
