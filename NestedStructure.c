#include<stdio.h>   // Standard I/O library

struct Demo
{
    int i;          // Integer member
    float f;        // Float member
};

struct Hello
{
    int no;         // Integer data
    float marks;    // Float data
    struct Demo dobj;   // Nested structure object
};

int main()
{
    printf("Size of hello structure is : %lu\n",sizeof(struct Hello));  // Print size of structure

    return 0;       // Successful program termination
}
