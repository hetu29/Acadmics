//To swap the value of variable with an extra variable
#include<stdio.h>
int main()
{
    int a,b,c;
		
    printf("Enter a = ");
    scanf("%d",&a);

    printf("Enter b = ");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;

    printf("\na = %d",a);
    printf("\nb = %d",b);
    return 0;
}