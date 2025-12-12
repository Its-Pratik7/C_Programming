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

    obj.i = 11;        // assign int value
    obj.f = 90.4f;     // assign float value
    obj.j = 21;        // assign another int value

    printf("%d\n",obj.i);   // print i
    printf("%f\n",obj.f);   // print f
    printf("%d\n",obj.j);   // print j
    
    return 0;
}
