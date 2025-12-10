#include<stdio.h>

int main()
{
    int Arr[5] = {10,20,30,40,50};   // array with 5 elements

    printf("Size of Arr : %lu\n",sizeof(Arr));  // total size of array in bytes
    
    printf("Arr : %lu\n",Arr);        // base address of array
    printf("&Arr : %lu\n",&Arr);      // address of entire array
    
    printf("Arr + 1 : %lu\n",Arr + 1);        // moves by size of int (4 bytes)
    printf("(&Arr) + 1 : %lu\n",(&Arr) + 1);  // moves by full array size (20 bytes)

    return 0;
}
