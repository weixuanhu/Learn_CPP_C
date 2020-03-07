#include <iostream>
#include <string>
using namespace std;

string global_str;
int global_int;

int main(int argc, char **argv){
    int local_int;
    string local_str;

    cout << "global str: " << global_str << endl;
    cout << "global int: " << global_int << endl;
    cout << "local str: " << local_str << endl;
    cout << "local int: " << local_int << endl;

    return 0;
}
