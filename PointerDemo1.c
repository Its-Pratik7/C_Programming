#include<stdio.h>

int main()
{
    int iValue = 11;        // int variable
    char cValue = 'M';      // char variable

    int *iPtr = &iValue;    // int pointer
    char *cPtr = &cValue;   // char pointer

    printf("sizeof iptr : %lu\n",sizeof(iPtr));   // pointer size
    printf("sizeof cptr : %lu\n",sizeof(cPtr));   // pointer size
    
    return 0;
}
