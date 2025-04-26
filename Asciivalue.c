#include<stdio.h>
#include<conio.h>
int main()
//use void instead of int a its made in vs code //// dont foorget to add clrscr()and getch()
{
    char c;

    // Prompt user to enter a character
    printf("Enter a character: ");
    scanf("%c", &c);

    // Display ASCII value
    printf("The ASCII value of '%c' is %d\n",c,  c);

    return 0;

}
