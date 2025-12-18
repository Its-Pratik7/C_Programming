#include<stdio.h>

int main()
{
    int size = 0;
    int *Arr = NULL;

    printf("Enter number of element : \n");
    scanf("%d",&length);
    // Step 1 : 

    Arr = (int *)calloc(length , sizeof(int));
    if(Arr == NULL)
    {
        printf("Unable to allocate memory\n");

    }
    else
    {
        printf("Memory gets succesfully allocated\n");
    }
    free(Arr)





    return 0;
}