#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv){
    string line = "* I say: \' hello world. !!! \'";
    cout << "original line: " << line << endl;

    // punctCnt is the count of punctuation in line
    decltype(line.size()) punctCnt = 0;
    for (auto c: line){
        if (ispunct(c)){
            punctCnt++;
        }
    }
    
    cout << "the punctuation count is : " << punctCnt << endl;

    return 0;
}

