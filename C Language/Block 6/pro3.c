//Write a program using function to count the area of circle, triangle, rectangle and square.
#include <stdio.h>

    float circle(float r) 
    {
        return 3.14 * r * r;
    }

    float triangle(float b, float h) 
    {
        return 0.5 * b * h;
    }

    float rectangle(float l, float b) 
    {
        return l * b;
    }

    float square(float s) 
    {
        return s * s;
    }

    int main() 
    {
        float r = 2, b = 4, h = 5, l = 6, s = 3;

        printf("Area of Circle: %.2f\n", circle(r));
        printf("Area of Triangle: %.2f\n", triangle(b, h));
        printf("Area of Rectangle: %.2f\n", rectangle(l, b));
        printf("Area of Square: %.2f\n", square(s)); 
    return 0;
    }