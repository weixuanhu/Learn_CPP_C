#include <string>
#include <iostream>
using namespace std;

bool HasUpper(const string &s){
    for (auto c:s){
        if (isupper(c)){
            return true;
        }
    }
    return false;
}

void ToUpper(string &s){
    for (auto &c:s){
        c = toupper(c);
    }
}

int main(){
    string s = "Hello World";
    string s2 = "hello world";
    cout << HasUpper(s) << endl;
    cout << HasUpper(s2) << endl;

    ToUpper(s);
    ToUpper(s2);

    cout << s << endl;
    cout << s2 << endl;
}