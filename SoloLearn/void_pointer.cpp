#include <iostream>

/*
https://www.tutorialspoint.com/void-pointer-in-c
The void pointer in C is a pointer which is not associated with any data types. It points to some data location in the storage means points to the address of variables. It is also called general purpose pointer. In C, malloc() and calloc() functions return void * or generic pointers.
It has some limitations −
1) Pointer arithmetic is not possible with void pointer due to its concrete size.
2) It can’t be used as dereferenced.
*/

int main(int argc, char **argv){
    void *void_ptr = nullptr;
    int anInt = 10;
    float aFloat = 3.142;
    
    void_ptr = &anInt;
    std::cout << "deference void pointer to int: " << * ((int *) void_ptr);
    std::cout << std::endl;

    void_ptr = &aFloat;
    std::cout << "deference void pointer to float: " << * ((float *) void_ptr);
    std::cout << std::endl;

    return 0;
}