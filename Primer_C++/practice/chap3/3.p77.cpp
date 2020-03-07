#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
    string s1, s2;
    cout << "please input strings " << endl;
    cin >> s1 >> s2;                // if user input:     hello world
    cout << s1 << s2 << endl;       // output will be: helloworld
    return 0;
}