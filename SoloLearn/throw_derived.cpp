#include <iostream>
using namespace std;

class base {};
class derived : base {};

int main(int argc, char **argv){
    derived d;
    
    try {throw d;}
    
    catch (base b){
        cout << 1;
    }
    catch (derived d){
        cout << 2;
    } 
}