#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
    string line = "* I say: \' hello world. !!! \'";
    cout << "original line: " << line << endl;
    for (auto &c: line){
            c = toupper(c);
    }
    
    cout << line <<  endl;

    return 0;
}
