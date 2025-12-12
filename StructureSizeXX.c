#include<stdio.h>

struct Demo
{
    int i;        // int
    char ch1;     // char
    char ch2;     // char
    float f;      // float
    int j;        // int
};

int main()
{
    printf("Size of structure is : %lu\n",sizeof(struct Demo));   // print structure size
    
    return 0;
}
