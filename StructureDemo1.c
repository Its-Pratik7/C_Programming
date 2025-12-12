#include<stdio.h>

struct Demo
{
    int i;        // integer member
    float f;      // float member
    int j;        // another integer
};

int main()
{
    struct Demo obj;   // structure variable

    printf("Size of Demo is : %lu\n",sizeof(struct Demo));       // print structure size
    printf("size of object is : %lu\n",sizeof(obj));             // print variable size
    
    return 0;
}
