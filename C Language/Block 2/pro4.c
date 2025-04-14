//Write a program to print number of days in a given month using the switch statement . the program required month number ( 1 to 12 ) program number to print also the days
#include<stdio.h>
int main()
{
    int n;
    
    printf("Enter a month = ");
    scanf("%d",&n);
    
    switch(n)
    {
        case 1:
        printf("January");
        printf("\n31 Days");
        break;
        
        case 2:
        printf("February");
        printf("\n28 Days");
        break;
        
        case 3:
        printf("March");
        printf("\n31 Days");
        break;
        
        case 4:
        printf("April");
        printf("\n30 Days");
        break;
        
        case 5:
        printf("May");
        printf("\n31 Days");
        break;
        
        case 6:
        printf("June");
        printf("\n30 Days");
        break;
        
        case 7:
        printf("July");
        printf("\n31 Days");
        break;
        
        case 8:
        printf("August");
        printf("\n31 Days");
        break;
        
        case 9:
        printf("September");
        printf("\n30 Days");
        break;
        
        case 10:
        printf("October");
        printf("\n31 Days");
        break;
        
        case 11:
        printf("November");
        printf("\n30 Days");
        break;
        
        case 12:
        printf("December");
        printf("\n31 Days");
        break;
    }
    return 0;
}