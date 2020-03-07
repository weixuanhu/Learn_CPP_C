#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
    string sentence;
    while (getline(cin, sentence)){
        if (!sentence.empty()){
            cout << sentence << endl;
        }
    }
    return 0;
}
