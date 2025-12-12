#include<stdio.h>

struct Demo
{
    int i;         // integer member
    float f;       // float member
    int j;         // another integer
};

int main()
{
    struct Demo obj;        // structure variable
    struct Demo *p = &obj;  // pointer to structure

    p->i = 11;              // assign using pointer
    p->f = 90.4f;           // assign float using pointer
    p->j = 21;              // assign int using pointer

    printf("%d\n",p->i);    // print i using pointer
    printf("%f\n",p->f);    // print f using pointer
    printf("%d\n",p->j);    // print j using pointer
    
    return 0;
}
