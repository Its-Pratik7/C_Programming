#include<stdio.h>

int main()
{
    int i = 10;           // default integer
    short int j = 20;     // short type integer
    long int k = 30;      // long type integer

    printf("size of integer is : %lu\n",sizeof(i));         // default int size
    printf("size of short integer is : %lu\n",sizeof(j));   // short int size
    printf("size of long integer is : %lu\n",sizeof(k));    // long int size

    return 0;   // end
}
