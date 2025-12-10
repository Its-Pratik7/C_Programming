#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};   // simple integer array

    printf("Arr : %lu\n",Arr);                // prints base address     All three prints same address
    printf("&Arr : %lu\n",&Arr);              // prints address of array
    printf("&(Arr[0]) : %lu\n",&(Arr[0]));    // prints address of first element

    return 0;
}
