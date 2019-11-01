#include <iostream>
using namespace std;

template <class T, class U>
class myClass{
    private:
        T myT;
        U myU;
    public:
        myClass(){
            cout << "myClass Constructor is called" << endl;
        }
};

int main(int argc, char* argv[]){
    myClass<int, double> myClass1;
    myClass<char, bool> myClass2;
}