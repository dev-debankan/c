#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Prompt the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Calculate the sum of digits
    while (num != 0) {
        remainder = num % 10;  // Extract the last digit
        sum += remainder;      // Add it to the sum
        num /= 10;             // Remove the last digit
    }

    // Output the result
    printf("Sum of the digits: %d\n", sum);

    return 0;
}