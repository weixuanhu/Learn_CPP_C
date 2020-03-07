#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "hello world";
    // s is not empty
    if (s.begin() != s.end()){
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s << endl;
    return 0;
}
