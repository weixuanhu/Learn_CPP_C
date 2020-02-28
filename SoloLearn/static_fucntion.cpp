/* what is the output of this code ?
(a) fun() is static
(b) Compiler Error (Correct)
*/

#include <iostream>
using namespace std;

class Test{
    public:
        static void fun();
};

void Test::fun(){
    std::cout << "fun() is static \n";
}

int main(){
    Test::fun();
    return 0;
}