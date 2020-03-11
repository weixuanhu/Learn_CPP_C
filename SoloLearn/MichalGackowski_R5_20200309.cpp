#include <iostream>
#include <vector>
using namespace std;

int v[10] = {1};
int& g(int i) { return v[i];}
int main(){
    
    g(2) = 3;
    cout << v[0] << v[1] << v[2] << endl;
}