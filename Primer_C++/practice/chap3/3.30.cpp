#include <string>
using namespace std;

int main(){
    constexpr size_t array_size = 10;
    int ia[array_size];
    
    /* error: index out of upper limit
    for (size_t ix=1; ix<=array_size; ix++){
        ia[ix] = ix;
    }
    */


    for (size_t ix=0; ix<array_size; ix++){
        ia[ix] = ix;
    }
}
