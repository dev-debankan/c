#include <stdio.h>

int factorial(int n) {
    return n <= 1 ? 1 : n * factorial(n-1);
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}