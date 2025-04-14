//Write a program to check whether the number is Armstrong or not. Example: 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
#include <stdio.h>

int main() {
    int num, original, remainder, sum = 0;
    
    // Ask user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Store the original number to compare later
    original = num;
    
    // Loop to extract digits and calculate sum
    while (num > 0) {
        remainder = num % 10;          // Get last digit
        sum = sum + (remainder * remainder * remainder);  // Add cube of digit
        num = num / 10;               // Remove last digit
    }
    
    // Check if original number equals the sum
    if (sum == original) {
        printf("%d is an Armstrong number\n", original);
    } else {
        printf("%d is not an Armstrong number\n", original);
    }
    
    return 0;
}