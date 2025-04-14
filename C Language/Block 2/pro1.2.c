//Write a program to find maximum values from 3 values...
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    
    printf("Enter a = ");
    scanf("%d",&a);
    
    printf("Enter b = ");
    scanf("%d",&b);
    
    printf("Enter c = ");
    scanf("%d",&c);
    
    if(a>b)
    {   
        if(a>c)
        printf("\nA is greatest");
    }
    else if(b>c)
    {   
        printf("\nB is greatest");
    }
    else
    {
        printf("\nC is Greatest");
    }
    return 0;
}