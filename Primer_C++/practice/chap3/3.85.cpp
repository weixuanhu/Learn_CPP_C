#include <iostream>
#include <string>
using namespace std;

int main(){
    string line = "some string";
    for (decltype(line.size()) index = 0;
            index!=line.size() && !isspace(line[index]);
            index++){
        line[index] = toupper(line[index]);
    }
    cout << line << endl;
}

