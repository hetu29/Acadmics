#include <stdio.h>
#include <ctype.h>

int main() {
    char input[100], upper[100], lower[100];
    int i;

    // Read input string
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the trailing newline character from fgets
    for (i = 0; input[i] != '\0'; i++) {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        }
    }

    // Convert each character to uppercase and lowercase
    for (i = 0; input[i] != '\0'; i++) {
        upper[i] = toupper(input[i]);
        lower[i] = tolower(input[i]);
    }
    upper[i] = '\0'; // Null-terminate the uppercase string
    lower[i] = '\0'; // Null-terminate the lowercase string

    // Print results
    printf("\nOriginal String: %s\n", input);
    printf("Uppercase String: %s\n", upper);
    printf("Lowercase String: %s\n", lower);

    return 0;
}