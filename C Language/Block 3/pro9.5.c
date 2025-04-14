#include <stdio.h>

int main() {
    // Loop for 5 rows
    for(int i = 1; i <= 5; i++) {
        // Print spaces
        for(int j = 1; j < i; j++) {
            printf("  ");  // Two spaces for alignment
        }
        
        // Print numbers in decreasing order
        for(int k = 6-i; k >= 1; k--) {
            printf("%d ", k);  // One space after each number
        }
        
        printf("\n");
    }
    
    return 0;
}
