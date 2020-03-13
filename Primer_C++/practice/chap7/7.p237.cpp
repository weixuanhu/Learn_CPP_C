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
    Test1 t0(); // valid because we have used 'func()=default;
    Test1 t("constructor");
}