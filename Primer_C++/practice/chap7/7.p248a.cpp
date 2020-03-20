#include <iostream>
using namespace std;

class Test{
    public:
        void display() const {
            cout << "this is a const func" << endl;
        }
        void display() {
            cout << "this is a normal func" << endl;
        }
};

int main(){
    Test nonConst;
    Test const aConst;
    nonConst.display();
    aConst.display();
}