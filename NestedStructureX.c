#include<stdio.h>   // Standard I/O library

struct Hello
{
    int no;         // Integer member
    float marks;    // Float member
    struct Demo
    {
        int i;      // Integer inside nested structure
        float f;    // Float inside nested structure
    }dobj;          // Nested structure variable
};

int main()
{
    printf("Size of hello structure is : %lu\n",sizeof(struct Hello));  // Display structure size

    return 0;       // End of program
}
