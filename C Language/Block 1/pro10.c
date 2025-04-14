//Write a program to enter the marks of 5 subjects for a students and calculate average & percentage
#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5;
    float avg,per,total;
    
    printf("Enter m1 = ");
    scanf("%d",&m1);
    
    printf("Enter m2 = ");
    scanf("%d",&m2);
    
    printf("Enter m3 = ");
    scanf("%d",&m3);
    
    printf("Enter m4 = ");
    scanf("%d",&m4);
    
    printf("Enter m5 = ");
    scanf("%d",&m5);
    
    total=m1+m2+m3+m4+m5;
    avg=(total)/5;
    per=((total/500)*100);
    
    printf("\nAverage Marks = %f",avg);
    printf("\nPercentage = %f",per);
    return 0;
}