#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Prompt the user for the number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    
    printf("\n");
    return 0;
}