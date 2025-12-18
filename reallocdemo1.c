#include<stdio.h>          // Standard I/O
#include<stdlib.h>         // Memory functions

int main()                 // Main function
{
    int *Arr = NULL;       // Pointer initialization

    // Allocate memory
    Arr = (int *)malloc(5 * sizeof(int)); // Allocate initial memory

    // Resize memory
    Arr = (int *)realloc(Arr,10*sizeof(int)); // Increase memory size

    // Free memory
    free(Arr);             // Release memory

    return 0;              // Program end
}
