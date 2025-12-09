#include<stdio.h>

int main()
{
    int i = 10, j = 10;        // initialize variables
    int iAns = 0, jAns = 0;    // store results

    iAns = i++;    // post-increment: assign then increase
    jAns = ++j;    // pre-increment: increase then assign

    printf("Value of i : %d\n",i);          // i becomes 11
    printf("Value of iAns : %d\n",iAns);    // stores old value 10

    printf("Value of j : %d\n",j);          // j becomes 11
    printf("Value of jAns : %d\n",jAns);    // stores new value 11

    return 0;   // end
}
