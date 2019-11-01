#include <iostream>
using namespace std;

template <class T, class U = char>
class DefaultValue{
    private:
        T myT;
        U myU;
    public:
        DefaultValue(){
            cout << "DefaultValue constructor is called" << endl;
        }
};

int main(int argc, char* argv[]){
    DefaultValue<bool> testTemplate;
}