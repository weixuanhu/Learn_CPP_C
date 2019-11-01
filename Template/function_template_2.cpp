#include <iostream>
using namespace std;

template <typename T>
T myMax(T x, T y){
    return (x > y)? x : y; 
}

int main(int argc, char* argv[]){
    int intMax = myMax<int>(30, 70);
    cout << "Max integer is : " << intMax << "\n";
    float floatMax = myMax<float>(1.23, 3.21);
    cout << "Max float is : " << floatMax << "\n";
    char charMax = myMax<char>('a','z');
    cout << "Max char is : " << charMax << "\n";
}