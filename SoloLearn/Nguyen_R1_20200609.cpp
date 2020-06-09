#include <iostream>
using namespace std;
// https://stackoverflow.com/questions/7459939/what-do-single-quotes-do-in-c-when-used-on-multiple-characters
// multi-character literal

int main()
{
    int anInt = 'abcde';
    char anChar = 'abcde';
    cout << anInt << endl;
    cout << anChar << endl;
    return 0;
}