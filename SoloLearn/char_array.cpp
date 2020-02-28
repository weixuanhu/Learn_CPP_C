/* what is the output of this code ?
1. |\/|
2. |\/
3. |\/0
4. |\\/
*/

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    // key knowledge: The first \ is an escape character !
    char arr[4] = {'|', '\\', '/'};
    for (int i=0; i<4; i++) cout << arr[i];
}