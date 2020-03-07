#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
    string line="abcde fght";
    cout << line.size() << endl;

    // string.size() output type is string::size_type, can it be assigned to integer ?
    int i;
    i = line.size();
    return 0;
}
