//Write a program to read data from File and display on screen.
#include <stdio.h>
    
    int main() 
    {
        FILE *f;
        char ch;
        f = fopen("data.txt", "r");
        
        if (f == NULL) 
        {
            printf("File not found.\n");
        }
        else 
        {
            while ((ch = fgetc(f)) != EOF) 
            {
                putchar(ch);
            }
            fclose(f);
        }
    return 0;
    }
