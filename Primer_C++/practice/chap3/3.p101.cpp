#include <string>
using namespace std;

int main(){
    unsigned cnt = 42;
    constexpr unsigned sz = 42;
    const unsigned size = 42;
    
    // invalid, cnt is not const expression
    // string s[cnt];

    // valid
    int *ptr[sz];

    // ??
    string s[size];

    return 0;
}
