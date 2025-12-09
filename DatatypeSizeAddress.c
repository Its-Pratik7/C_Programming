#include<stdio.h>

int iMarks = 89;     // global variable

int main()
{
    char cValue = 'S';          // character variable
    int iValue = 11;            // integer variable
    float fValue = 90.78f;      // float variable
    double dValue = 98.564323;  // double variable

    printf("Size of character is : %lu\n",sizeof(cValue));   // print char size
    printf("Size of integer is : %lu\n",sizeof(iValue));     // print int size
    printf("Size of flaot is : %lu\n",sizeof(fValue));       // print float size
    printf("Size of double is : %lu\n",sizeof(dValue));      // print double size
    
    printf("Address of cValue is : %lu\n",&cValue);   // print memory address
    printf("Address of iValue is : %lu\n",&iValue);   // print memory address
    printf("Address of fValue is : %lu\n",&fValue);   // print memory address
    printf("Address of dValue is : %lu\n",&dValue);   // print memory address

    return 0;   // end of program
}
