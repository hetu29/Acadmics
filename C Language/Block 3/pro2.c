//Write a program to read any 7 number and print the average value using for-loop
#include<stdio.h>
int main()
{
    int i,sum=0;
    float avg;
    
    for(i=1;i<=7;i++)
    {
        printf("\n%d",i);
        sum=sum+i;
    }
    avg=sum/7;
    printf("\nSum = %d",sum);
    printf("\nAvg = %f",avg);
    return 0;
}