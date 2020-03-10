#include <string>
#include <iostream>
using namespace std;

bool my_is_empty(string &s) {return s.empty(); }
bool my_is_empty_const(const string &s) {return s.empty(); }

int main(){
    string s = "hello world";
    // valid function call
    bool result = my_is_empty(s);
    cout << result << endl;
    // invalid function call
    result = my_is_empty_const("hello world");
    cout << result << endl;
}