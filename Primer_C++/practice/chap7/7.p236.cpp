#include <iostream>
#include <string>
using namespace std;

class Test1{
    public:
        Test1(string const &s){
            cout << s << endl;
        }
};

int main(){
    // invalid: once there is constructor defined, 
    // there will be no default constructor.
    // Test1 t;
    
    Test1 t("constructor");
}