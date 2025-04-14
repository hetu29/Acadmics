//Write a program that demonstrates the use of address of (&) and pointer (*) operator.
#include <stdio.h>

    int main() 
    {
        int a = 10;
        int *p;
        p = &a;
        
        printf("Value of a: %d\n", a);
        printf("Address of a: %u\n", &a);
        printf("Pointer p holds address: %u\n", p);
        printf("Value pointed by p: %d\n", *p);
    return 0;
    }