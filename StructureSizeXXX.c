#include<stdio.h>

#pragma pack(1)   
// remove padding, pack members tightly
struct Demo
{
    int i;        // int
    char ch1;     // char
    float f;      // float
    char ch2;     // char
    int j;        // int
};

int main()
{
    printf("Size of structure is : %lu\n",sizeof(struct Demo));   // print packed struct size
    
    return 0;
}
