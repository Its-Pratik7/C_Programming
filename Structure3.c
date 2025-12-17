#include<stdio.h>   // Standard I/O library

struct Demo
{
    int i;          // Integer data
    struct Demo * ptr;   // Pointer to same structure
};

int main()
{
    struct Demo obj1;    // First object
    struct Demo obj2;    // Second object
    struct Demo obj3;    // Third object
        
    obj1.i = 11;         // Assign value to obj1
    obj2.i = 21;         // Assign value to obj2
    obj3.i = 51;         // Assign value to obj3

    obj1.ptr = &obj2;    // obj1 points to obj2
    obj2.ptr = &obj3;    // obj2 points to obj3
    obj3.ptr = NULL;     // obj3 points to nothing
        
    return 0;            // End of program
}
