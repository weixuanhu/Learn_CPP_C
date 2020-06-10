/*
 * How to use GDB with BT(Backtrace)
 * GDB is an essential tool for programmers to debug their code.
 * Breakpoints are the way to tell GDB to stop or pause the program execution at certain line, or function, or address. 
 * Once the program is stopped you can examine and change the variable values, continue the program execution from that breakpoint, etc.
 * Similar to breakpoints, backtrace is also helpful during debugging process to view and navigate the stack frame as explained in this tutorial
 * This tutorial requires some basic understanding of stack frame that we discussed in our memory layout of a process article.
 * C Code Example for GDB Backtrace
 * The following C program code example will be used in this tutorial to explain GDB backtrace.
 */

// http://www.emblogic.com/blog/12/how-to-use-gdb-with-btbacktrace/
#include <iostream>
using namespace std;

void func1();
void func2();

int main(int argc, char* argv[]){
    int i = 10;
    func1();
    cout << "in main() i=" << i << endl;
}

void func1(){
    int i = 20;
    cout << "in func1 i=" << i << endl;
    func2();
}

void func2(){
    int i = 30;
    cout << "in func2 i=" << i << endl;
}

