// Find the area and perimeter of square , rectangle & circle
#include<stdio.h>
int main()
{
    int l,b,r,s;
    float perimeter,area,pi=3.14;
		
    printf("Enter side of square = ");
    scanf("%d",&s);

    perimeter = 4*s;
    area = s*s;
    printf("Perimeter of square = %f",perimeter);
    printf("\nArea of square = %f",area);

    printf("\n\nEnter length of rectangle = ");
    scanf("%d",&l);
    printf("Enter breadth of rectangle = ");
    scanf("%d",&b);

    perimeter = 2*(l+b);
    area = (l*b);
    printf("Perimeter of rectangle = %f",perimeter);
    printf("\nArea of rectangle = %f",area);

    printf("\n\nEnter radius of circle = ");
    scanf("%d",&r);

    perimeter = 2*pi*r;
    area = pi*r*r;
    printf("Perimeter of circle = %f",perimeter);
    printf("\nArea of circle = %f",area);

  return 0;
}