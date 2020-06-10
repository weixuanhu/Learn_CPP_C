#include <iostream>
#include <array>

/* https://en.cppreference.com/w/cpp/container/array/fill
 * Assigns the given value value to all elements in the container.
 * void fill( const T& value ); since C++11, until C++20
 * constexpr void fill(const T& value);
 */

using namespace std;

void simpleCase(){
    array<int, 4> n = {1, 2, 3, 4};
    n.fill(2);
    for (size_t i = 0; i < n.size(); i++){
        cout << n[i] << " ";
    }
    cout << endl;
}

void complexCase(){
    constexpr int xy = 4;
    using Cell = array<unsigned char, 8>;
    array<Cell, xy * xy> board;
    board.fill({0xE2, 0x96, 0x84, 0xE2, 0x96, 0x80, 0, 0});
    for (size_t i = 0; i < board.size();i++){
        cout << board[i].data();
        if((i+1)%xy==0){
            cout << endl;
        }
    }
}

int main(int argc, char* argv[]){
    simpleCase();
    complexCase();
    return 0;
}