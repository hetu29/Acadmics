//Write a program to check whether a number is a Krishnamurthy number or not.(Krishnamurthy number is one whose sum of Factorial of digits equals the number.) Example: 145 = 1! + 4! + 5! =  1 + 24 + 120 = 145
#include <stdio.h>

int main() 
{
    int number, original, digit, sum = 0;
    
    // Ask user for a number
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Save the original number to compare later
    original = number;
    
    // Check each digit one by one
    while (number > 0) {
        digit = number % 10;  // Get the last digit
        number = number / 10; // Remove the last digit
        
        // Calculate factorial for this digit
        int fact = 1;
        int i = 1;
        while (i <= digit) {
            fact = fact * i;
            i = i + 1;
        }
        
        // Add this factorial to sum
        sum = sum + fact;
    }
    
    // Check if sum matches original number
    if (sum == original) {
        printf("%d is a Krishnamurthy number\n", original);
    } else {
        printf("%d is not a Krishnamurthy number\n", original);
    }
    
    return 0;
}