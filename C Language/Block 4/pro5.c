//Write a program to find the length of string...
#include<stdio.h>
#include<string.h>
    int main()
    {
        char str[100];

        printf("Enter a String : ");
        scanf("%s",&str);

        int len = strlen(str);

        printf("The length of the String is : %d\n",len);
        return 0;
    }