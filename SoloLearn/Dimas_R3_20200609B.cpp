// what is the output of this code ?
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int x = 0;
    int y = 1;
    if(!(x!=y)){
        cout << x * y << endl;
    }
    else{
        cout << x + y << endl;
    }
    return 0;
}