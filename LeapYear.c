#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("ENTER THE YEAR");
    scanf("%d",&n);
    if(n%4==0){
        printf("THE YEAR IS LEAP YEAR");
    }else{
        printf("THE YEAR IS NOT  A LEAP YEAR");
    }
}