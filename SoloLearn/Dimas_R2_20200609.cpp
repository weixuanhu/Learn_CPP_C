// what is the output of this code ?
// reference: https://en.cppreference.com/w/cpp/language/try_catch
/* 
 * When an exception of type E is thrown by any statement in compound-statement, it is matched against the types of the formal parameters T of each catch-clause in handler-seq, in the order in which the catch clauses are listed. The exception is a match if any of the following is true:
    E and T are the same type (ignoring top-level cv-qualifiers on T)
    T is an lvalue-reference to (possibly cv-qualified) E
    T is an unambiguous public base class of E
    T is a reference to an unambiguous public base class of E
    T is (possibly cv-qualified) U or const U& (since C++14), and U is a pointer or pointer to member (since C++17) type, and E is also a pointer or pointer to member (since C++17) type that is implicitly convertible to U by one or more of 
        a standard pointer conversion other than one to a private, protected, or ambiguous base class
        a qualification conversion 
        a function pointer conversion 
	(since C++17)
    T is a pointer or a pointer to member or a reference to a const pointer (since C++14), while E is std::nullptr_t. 
 */

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    class base{
    };
    class derived: base{
    };

    base b;
    derived d;

    try
    {
        throw d;
    }

    catch(base aBase){
        cout << 1 << endl;
    }
    
    catch(derived aDerived){
        cout << 2 << endl;
    }

    return 0;
}