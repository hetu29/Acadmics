#include <stdio.h>

int main() {
    // Loop for each row (5 rows)
    for(int i = 1; i <= 5; i++) {
        // Print spaces (each position needs one space)
        for(int j = 1; j <= 5-i; j++) {
            printf("  ");  // Two spaces for alignment
        }
        
        // Print alphabets
        for(int k = 0; k < i; k++) {
            printf("%c ", 'A' + k);  // One space after each letter
        }
        
        printf("\n");
    }
    
    return 0;
}
