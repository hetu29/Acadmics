// Write a program to calculate total salary of an employee ( total salary = basic + da + hra + ta ) & da = 50% of basic 
#include<stdio.h>
#include<conio.h>
int main()
{
    float basic,HRA,ta,da,total_salary;
    
    printf("Enter Base Salary = ");
    scanf("%f",&basic);
    
    if(basic<6000)
    {
        HRA = 400;
        ta = 100;
    }
    else if(basic>=6000 && basic<=10000)
    {
        HRA = 1400;
        ta = 200;
    }
    else
    {
        HRA = 2400;
        ta = 500;
    }
    da=0.5*basic;
    total_salary=basic+da+HRA+ta;
    printf("\nda = %f",da);
    printf("\nHRA = %f",HRA);
    printf("\nta = %f",ta);
    printf("\nTotal Salary = %f",total_salary);
return 0;
}