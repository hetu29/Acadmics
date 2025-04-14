// Write a program to check wheather given character is vowel or not.
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    
    printf("Enter a Character = ");
    scanf("%c",&ch);
    
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("It is a VOWEL");
    }
    else
    {
        printf("It is not a VOWEL");
    }
    return 0;
}