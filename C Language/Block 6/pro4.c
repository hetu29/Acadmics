//Write a program that demonstrates call by value and call by reference concept in function argument.
#include <stdio.h>

    void call_by_value(int x) 
    {
        x = x + 10;
        printf("Inside call_by_value: %d\n", x);
    }

    void call_by_reference(int *y) 
    {
        *y = *y + 10;
        printf("Inside call_by_reference: %d\n", *y);
    }

    int main() 
    {
        int a = 5, b = 5;
        call_by_value(a);
        printf("After call_by_value: %d\n", a);
        call_by_reference(&b);
        printf("After call_by_reference: %d\n", b);
    return 0;
    }