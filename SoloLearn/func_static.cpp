/* what is the output of this code ? */

#include <iostream>
using namespace std;

template <typename T>
void fun(const T& x){
    static int i = 1;
    cout << ++i;
    return;
}

int main() {
    fun<int>(1);
    fun<int>(2);
    fun<double>(1);
    fun<int>(4);
    return 0;
}