//Write a program to check even or odd using  if else
#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter a number = ");
    scanf("%d",&n);
    
    if(n%2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
    return 0;
}