#include<stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0, iAns = 0; // Variables

    printf("Enter first number : \n");
    scanf("%d",&iValue1);   // Input 1

    printf("Enter second number : \n");
    scanf("%d",&iValue2);   // Input 2
    
    iAns = iValue1 + iValue2;   // Addition

    printf("Addition is : %d\n",iAns); // Output
    
    return 0;
}
