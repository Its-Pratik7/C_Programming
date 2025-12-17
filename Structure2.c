#include<stdio.h>   // Standard I/O library

struct Demo
{
    int i;          // Integer member
    float f;        // Float member
    struct Demo * ptr;   // Self-referential pointer
};

int main()
{
    printf("%lu\n",sizeof(struct Demo));   // Print structure size
    
    return 0;       // Successful exit
}
