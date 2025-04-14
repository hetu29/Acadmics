//Write a program to find a factorial of a number
#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1; // Use long long for larger results

    printf("Enter a number to find factorial: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact *= i; // Multiply current value of fact by i
    }

    printf("Factorial of %d is: %lld\n", n, fact);
    return 0;
}