#include <iostream>
using namespace std;

/* what is the output of this code ?
 * "HelloWorld" ? "WorldHello" ? "World" ? "Hello" ?
 */

class A{
    public:
        A(){ cout << "World"; }
        class B{
            public: 
                B(){ cout << "Hello"; }
        };
};

int main(int argc, char* argv[]){
    A::B obj;
    return 0;
}