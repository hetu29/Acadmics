//Write a program  to list all prime numbers within given range.
#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;
    
    // Get the range from user
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);
    
    printf("Prime numbers between %d and %d are:\n", start, end);
    
    // Loop through each number in the range
    for(i = start; i <= end; i++) {
        // Skip 0 and 1 as they are not prime
        if(i <= 1) {
            continue;
        }
        
        isPrime = 1;  // Assume number is prime
        
        // Check if number is prime
        for(j = 2; j < i; j++) {
            if(i % j == 0) {  // If i is divisible by j
                isPrime = 0;  // Not prime
                break;        // Exit inner loop
            }
        }
        
        // If number is prime, print it
        if(isPrime == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");  // New line at the end
    return 0;
}