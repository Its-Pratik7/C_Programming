#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};   // array

    int *p = NULL;    // pointer p
    int *q = NULL;    // pointer q

    p = &(Arr[1]);    // p at 21
    q = &(Arr[4]);    // q at 111

    printf("Data fetched by p is : %d\n",*p);   // print p
    printf("Data fetched by q is : %d\n",*q);   // print q
    
    p++;              // move forward
    q--;              // move backward

    printf("Data fetched by p is : %d\n",*p);   // print new p
    printf("Data fetched by q is : %d\n",*q);   // print new q
    
    return 0;
}
