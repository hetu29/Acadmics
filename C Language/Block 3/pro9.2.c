#include <stdio.h>

int main() {
    int i,j,n=1;  // Starting number
    
    // Outer loop for rows (1 to 4)
    for(i = 1; i <= 4; i++) {
        // Inner loop for columns (prints 'row' number of values in each row)
        for(j = 1; j <= i; j++) {
            printf("%d", n);
            n++;  // Increment number after printing
        }
        printf("\n");  // New line after each row
    }
    
    return 0;
}