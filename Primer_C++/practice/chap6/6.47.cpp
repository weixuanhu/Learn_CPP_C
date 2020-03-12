#include <iostream>
#include <vector>
using namespace std;
// #define NDEBUG

int main(){
    vector<int> elems = {1,3,5,7,11,-3,-234,200};
    for (auto e:elems){
        #ifdef NDEBUG
            cout << e << ", byte size is " << sizeof(e) << endl;
        #else
            cout << e << endl;
        #endif
    }
}