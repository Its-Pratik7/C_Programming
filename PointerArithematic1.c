#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};   // array

    int *p = NULL;    // pointer p
    int *q = NULL;    // pointer q

    p = &(Arr[1]);    // p at 21
    q = &(Arr[4]);    // q at 111

    printf("Data fetched by p is : %d\n",*p);   // print p value
    printf("Data fetched by q is : %d\n",*q);   // print q value
    
    return 0;
}
