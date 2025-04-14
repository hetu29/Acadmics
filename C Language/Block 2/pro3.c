//Write a program that read the number 1 to 7 accordingly it should display monday to sunday using if - else-if.
#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
   
    printf("Enter Number = ");
    scanf("%d",&n);
    
    if(n==1)
    {
        printf("Monday");
    }
    else if(n==2)
    {
        printf("Tuesday");
    }
    else if(n==3)
    {
        printf("Wednesday");
    }
    else if(n==4)
    {
        printf("Thursday");
    }
    else if(n==5)
    {
        printf("Friday");
    }
    else if(n==6)
    {
        printf("Saturday");
    }
    else
    {
        printf("Sunday");
    }
    return 0;
}