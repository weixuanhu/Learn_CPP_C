/* which header is needed for the rand() function */
#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int i = rand();
    cout << "random number is : " << i << endl;
    return 0;
}