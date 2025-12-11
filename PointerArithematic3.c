#include<stdio.h>

int main()
{
    int Arr[] = {11,21,51,101,111};   // array

    int *p = NULL;    // pointer p
    int *q = NULL;    // pointer q

    p = &(Arr[1]);    // p at 21
    q = &(Arr[4]);    // q at 111

    //p + q;          // invalid
    p = p + 3;        // move pointer

    printf("Data pointed by p is : %d\n",*p);   // print value

    return 0;
}
