/* https://arne-mertz.de/2018/10/calling-cpp-code-from-c-with-extern-c/
 * according to the article, this example will not pass through compiler linking
 * if use makefile_g++.mk:
    * but it can run through in my environment.
    * But the behavior may not be stable, so better to use 'extern C'
 * if use makefile_gcc.mk
    * linking error
 */

#include "foo.h"

int main(){
    foo(20);
    return 0;
}