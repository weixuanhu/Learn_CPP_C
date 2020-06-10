/* need to be careful about : 
 * variable: definition, declaration, initialization, assignment
 * function: definition, declaration
 * and be aware of this concept : seperate compilation
 */

#include "formular.hpp"
#include "formular.hpp"

#define A 10
#define A 20

int main(){
    /* variable re-definition is not allowed
    int i;
    int i;
    */

    /* variable re-declaration is allowed */
    extern int i;
    extern int i;

    /* function re-declaration is allowed */
    void func();
    void func();

    return 0;
}