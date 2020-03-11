
#include <string>
#include <iostream>
#include <vector>
using namespace std;

int GetMax(const int anInt, const int *intPtr){
    if (anInt>*intPtr){
        return anInt;
    }
    else{
        return *intPtr;
    }
}

int main(){
    int a=5, b=-3;
    cout << GetMax(a, &b) << endl;
    cout << GetMax(-1*a, &b) << endl;
    return 0;
}
