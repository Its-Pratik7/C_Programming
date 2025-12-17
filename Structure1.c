#include<stdio.h>   // Standard I/O library

struct Demo
{
    int i;          // Integer member
    float f;        // Float member
    struct Demo dobj;   // Invalid: structure contains itself
};

int main()
{

    return 0;       // Program ends
}
