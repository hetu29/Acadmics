//Write a program to write data to the file.
#include <stdio.h>
    int main() 
    {
        FILE *f;
        char text[100];
        f = fopen("data.txt", "w");
        
        if (f == NULL) 
        {
            printf("Error opening file.\n");
        }
        else 
        {
            printf("Enter text to write into file: ");
            gets(text);
            fputs(text, f);
            fclose(f);
            printf("Data written to file.\n");
        }   
    return 0;
    }