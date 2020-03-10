#include <string>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv){
    string space = string(" ");
    string s = argv[1] + space + argv[2] + space + argv[3] + space + argv[4];
    cout << s << endl;
    return 0;
}