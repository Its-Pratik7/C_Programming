#include<stdio.h>

int main()
{
    int Arr[4] = {10,20,30,40};   // array initialization
    
    int Brr[3];                   // array declaration without values
    Brr[2] = 30;                  // assigning values manually
    Brr[0] = 10;
    Brr[1] = 20;

    printf("%d\n",Arr[0]);        // printing first element
    printf("%d\n",Arr[1]);        // printing second element

    printf("%d\n",Brr[0]);        // printing Brr first element
    printf("%d\n",Brr[1]);        // printing Brr second element

    return 0;
}
