#include <string>
#include <iostream>
using namespace std;

void find_char(string &s, char c, string::size_type &occurs){
    occurs = 0;
    for (auto e:s){
        if (e==c){
            ++occurs;
        }
    }
}

void find_char_const(const string &s, char c, string::size_type &occurs){
    occurs = 0;
    for (auto e:s){
        if (e==c){
            ++occurs;
        }
    }
}

int main(){
    string s = "hello world";
    string::size_type occurs = 0;
    
    // valid function call
    find_char(s, 'o', occurs);
    cout << occurs << endl;

    // valid function call
    find_char_const("hello world", 'o', occurs);
    cout << occurs << endl;

    /*
    // invalid function call
    find_char("hello world", 'o', occurs);
    cout << occurs << endl;
    */
}