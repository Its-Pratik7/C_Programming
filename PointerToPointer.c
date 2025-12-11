#include<stdio.h>

int main()
{
    int no = 11;      // variable

    int *p = &no;     // level 1 pointer
    int **q = &p;     // level 2 pointer
    int ***a = &q;    // level 3 pointer
    int ****b = &a;   // level 4 pointer
    int *****c = &b;  // level 5 pointer

    printf("%d\n",no);        // direct value
    printf("%d\n",*p);        // via p
    printf("%d\n",**q);       // via q
    printf("%d\n",***a);      // via a
    printf("%d\n",****b);     // via b
    printf("%d\n",*****c);    // via c
    
    return 0;
}
