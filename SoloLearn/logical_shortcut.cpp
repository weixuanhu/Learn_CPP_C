// what is the output of cout << !(1 || 0 && !1); ?

#include <iostream>
using namespace std;

int main() {
	int x=1, y=1, z=1;
	// question 1
	cout << ((1 || 1) && 0) << endl;
	// question 2
	cout << !(1 || 0 && !1) << endl;;
    // question 3
	cout << (++x || ++y && ++z) << endl;;
	cout << x << y << z << endl;
}