#include <iostream>
using namespace std;

int main(int argc, char **argv){
    // compile error, unDefined is not defined in line #8
    /*
    for (int unDefined=0; unDefined<10; unDefined++); {
        cout << unDefined << endl;
    }
    */
   int Defined = 0;
   for (int Defined=0; Defined<10; Defined++); {
        cout << Defined << endl;
    }
}