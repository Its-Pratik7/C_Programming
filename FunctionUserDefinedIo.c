#include<stdio.h>

// Function to add two numbers
int Addition(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;   // Perform addition
    return iSum;          // Return result
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);   // Read first number

    printf("Enter second number : \n");
    scanf("%d",&iValue2);   // Read second number

    iAns = Addition(iValue1, iValue2);   // Call addition function
    printf("Addition is : %d\n",iAns);   // Display result

    return 0;   // Exit program
}
