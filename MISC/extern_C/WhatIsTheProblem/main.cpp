/* https://arne-mertz.de/2018/10/calling-cpp-code-from-c-with-extern-c/
 * according to the article, this example will not pass through compiler linking
 * if use makefile_g++.mk:
   * The probably easiest way to use C functionality in a C++ program is to simply compile the C code as C++ code. 
   * This will, however, not work reliably. While C++ is based on C, the two languages have their differences.
   * They have even diverged insofar that modern C has features that are not valid C++.
   * So, we have to compile the C code as C, and the C++ code as C++. 
   * Some compilers do this automatically by file extension, others need to be told explicitly. 
   * The actual issue is to link the compiled C and C++ object files together.
 * if use makefile_gcc.mk
    * linking error
 */

#include "foo.h"

int main(){
    foo(20);
    return 0;
}