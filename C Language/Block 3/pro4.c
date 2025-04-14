//Write a program to print Fibonacci series of given integer number
#include<stdio.h>
int main()
{
    int n,x=0,y=1,z=0;
    
    printf("Enter n = ");
    scanf("%d",&n);
    
    while(z<=n)
    {
        printf("\n%d",z);
        x=y;
        y=z;
        z=x+y;
    }
    return 0;
}