#include <iostream>
using namespace std;

/* explanations:
 * Ternary operator 'a?b:c' has higher precedence than assignment operator '=',
 * meanwhile, the 'a?b:c' associativity is 'right-to-left' 
 * Thus G = (A=B?C:D?E:F) means G = (A=B?C:(D?E:F)), calculate from right to left
 */

int main(){
    int i = 0;
    cout << (i=0?1:2?3:4) << endl;
    cout << (i=0?1:0?3:4) << endl;
    cout << (i=1?1:2?3:4) << endl;
    cout << endl;
}