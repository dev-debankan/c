
    #include <stdio.h>

    int main() {
        int a, b, temp;
    //use void instead of int a its made in vs code //// dont foorget to add clrscr()and getch()
        // Input values from the user
        printf("Enter two numbers:\n");
        scanf("%d %d", &a, &b);
    
        printf("Before swapping: a = %d, b = %d\n", a, b);
    
        // Swap logic using a temporary variable
        temp = a;
        a = b;
        b = temp;
    
        printf("After swapping: a = %d, b = %d\n", a, b);
    
        return 0;
    }

