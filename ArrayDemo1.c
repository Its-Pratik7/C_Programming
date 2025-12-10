#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};      // declaring array with 4 elements
    int Brr[] = {10,20,30,40,50};    // array size decided by elements
    int Crr[6] = {10,20,30};         // remaining elements auto-filled with 0

    printf("Size of Arr is : %lu\n",sizeof(Arr)); // prints size of Arr (16)
    printf("Size of Brr is : %lu\n",sizeof(Brr)); // prints size of Brr (20)
    printf("Size of Crr is : %lu\n",sizeof(Crr)); // prints size of Crr  (24)

    return 0;
}
