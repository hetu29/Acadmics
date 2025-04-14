//Write a program to reverse the string.(Without inbuilt Function)
#include<stdio.h>
#include<string.h>
    int main()
    {
        char s[100];

        printf("Enter a String : ");
        gets(s);
        strrev(s);

        printf("The Reverse of the String : %s\n",s);
        return 0;        
    }