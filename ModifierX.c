#include<stdio.h>

int main()
{
    int i = 10;        // normal int
    int j = -10;       // negative value
    int k = +10;       // positive value

    signed int a = 10;     // signed integer (default)
    signed int b = -10;    // signed negative value
    signed int c = +10;    // signed positive value

    unsigned int x = 10;   // unsigned positive
    unsigned int y = +10;  // unsigned positive
    unsigned int z = -10;  // invalid but stored as large unsigned value

    printf("%d\n",x);   // print unsigned int
    printf("%d\n",y);   // print unsigned int
    printf("%d\n",z);   // prints wrapped value due to unsigned overflow
    
    return 0;   // end
}
