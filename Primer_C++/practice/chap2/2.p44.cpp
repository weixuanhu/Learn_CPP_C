#include <iostream>
using namespace std;

int resued = 42;
int main(int argc, char **argv){    
    cout << resued << endl;

    int resued = 5;
    cout << resued << endl;

    cout << ::resued << endl;
}


    