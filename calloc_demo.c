#include<stdio.h>          // Standard I/O
#include<stdlib.h>         // Memory functions

int main()                 // Main function
{
    int length = 0;        // Number of elements
    int *Arr = NULL;       // Pointer initialization

    printf("Enter the number of elements : \n"); // Input message
    scanf("%d",&length);   // Read input

    // Allocate memory
    Arr = (int *)calloc(length , sizeof(int)); // Allocate & initialize memory
    if(Arr == NULL)        // Check allocation
    {
        printf("Unable to allocate memory\n"); // Failure message
    }
    else
    {
        printf("Memory gets succesfully allocated\n"); // Success message
    }

    // Free memory
    free(Arr);             // Release memory

    return 0;              // Program end
}
