#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder, sum = 0;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    temp = num;

    // Calculate the sum of powers of digits
    while (temp != 0) {
        remainder = temp % 10; // Get the last digit
        sum += remainder * remainder * remainder; // Cube the digit and add it to the sum
        temp /= 10; // Remove the last digit
    }

    // Check if the number is an Armstrong number
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}