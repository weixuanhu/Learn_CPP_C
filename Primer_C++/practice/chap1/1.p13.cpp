#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int sum=0, value=0;
    while (cin >> value){
        cout << "value is " << value << endl;
        sum += value;
    }
    cout << "sum is " << sum << endl;
    return 0;
}