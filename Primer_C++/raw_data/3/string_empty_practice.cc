#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
    string s;
    while (getline(cin, s)){
        if (!s.empty()){
            cout << s << endl;
        }
        else {
            break;
        }
    }
    return 0;
}