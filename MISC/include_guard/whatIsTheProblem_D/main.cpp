// question: A.o, B.o has some 're-definition' of class, why the linking successfully passed ?
// https://stackoverflow.com/questions/50006071/why-theres-no-class-redefinition-error-in-link-stage-compared-to-functions 
// https://stackoverflow.com/questions/23746941/what-is-the-meaning-of-clangs-wweak-vtables
#include "headerA.hpp"
#include "headerB.hpp"
#include <iostream>

int main(){
    funcA();
    funcB();
    return 0;
}