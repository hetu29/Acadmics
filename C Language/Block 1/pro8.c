//Write a program to enter a temperature in a fahrenhiet and convert into the celsius
#include<stdio.h>
int main()
{
    float F,C;
    
    printf("Temperature in fahrenhiet = ");
    scanf("%f",&F);
    
    C = ((F-32)*5)/9;
    
    printf("Temperature in celsius = %f",C);
    return 0;
}