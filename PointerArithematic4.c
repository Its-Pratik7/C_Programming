#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};   // array

    int *p = NULL;    // pointer p
    int *q = NULL;    // pointer q

    p = &(Arr[1]);    // p at 21
    q = &(Arr[4]);    // q at 111

    printf("Result of substraction is : %ld\n",q-p);   // pointer diff

    q = q - 2;        // move q
    
    printf("Data pointed by q is %d\n",*q);    // print q value
 
    return 0;
}
