#include<stdio.h>

struct Demo
{
    int i;      // int (4 bytes)
    char ch;    // char (1 byte)
    float f;    // float (4 bytes)
    int j;      // int (4 bytes)
};

int main()
{
    printf("Size of structure is : %lu\n",sizeof(struct Demo));   // print structure size
    
    return 0;
}
