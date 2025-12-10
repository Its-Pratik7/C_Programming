#include<stdio.h>

int main()
{
    double Arr[] = {10.0,20.0,30.0,40.0};   // double array

    printf("Size of Arr : %lu : \n",sizeof(Arr));   // total size (4 * 8 bytes = 32)

    Arr++;      // Error: array name is not modifiable (cannot increment)

    return 0;
}
