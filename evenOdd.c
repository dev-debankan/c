#include<stdio.h>
#include<conio.h>
//use void instead of int a its made in vs code //// dont foorget to add clrscr()and getch()
int main()
{
    int a;
    printf("ENTER YOUR NUMBER:");
    scanf("%d",&a);
    if(a%2==0){
        printf("NUMBER IS EVEN");
    }else{
        printf("NUMBER IS ODD");
    }
}