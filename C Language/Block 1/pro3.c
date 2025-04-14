//Write a program to perform basic arithmetic operators on given two numbers
#include<stdio.h>
int main()
{
    int a,b,sum,sub,div,mul,mod;
	
		
    printf("Enter a = ");
    scanf("%d",&a);

    printf("Enter b = ");
    scanf("%d",&b);

    sum=a+b;
    sub=a-b;
    div=a/b;
    mul=a*b;
    mod=a%b;

    printf("\nSum = %d",sum);
    printf("\nSub = %d",sub);
    printf("\ndiv = %d",div);
    printf("\nMul = %d",mul);
    printf("\nMod = %d",mod);
    
    return 0;
}