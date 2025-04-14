//Write a program to copy one file to another file.
#include <stdio.h>
    int main() 
    {
        FILE *f1, *f2;
        char ch;
        f1 = fopen("source.txt", "r");
        f2 = fopen("target.txt", "w");

        if (f1 == NULL || f2 == NULL) 
        {
            printf("Error in opening file.\n");
        }
        else 
        {
            while ((ch = fgetc(f1)) != EOF) 
            {
                fputc(ch, f2);
            }
            
            printf("File copied successfully.\n");
            fclose(f1);
            fclose(f2);
        }
    return 0;
    }