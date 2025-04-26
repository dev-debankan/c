#include <stdio.h>
#include<conio.h>
int main()
//use void instead of int a its made in vs code //// dont foorget to add clrscr()and getch()
{
    int a;
    int b=1;
    printf("ENTER A NUMBER :");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        b*=i;

    }
    printf("THE FACTORIAL IS : %d",b);
}