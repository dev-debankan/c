#include <stdio.h>

int main() {
    float num1, num2, num3;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Compare and find the largest number
    if (num1 >= num2 && num1 >= num3) {
        printf("The largest number is: %.2f\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The largest number is: %.2f\n", num2);
    } else {
        printf("The largest number is: %.2f\n", num3);
    }

    return 0;
}