//Write a program to enter two numbers . Make the comparsion between them with an conditional operator if first number is greator than second perform multiplication otherwise perform division operation.
#include<stdio.h>
int main()
{
    int a,b;
    
    printf("Enter a = ");
    scanf("%d",&a);
    
    printf("Enter b = ");
    scanf("%d",&b);
    
    if(a>b)
    {
        printf("Multipication = %d",a*b);
    }
    else
    {
        printf("Division = %d",a/b);
    }
    return 0;
}