#include<stdio.h>
#include<conio.h>
int main()
//use void instead of int a its made in vs code //// dont foorget to add clrscr()and getch()
{
    int n;
    printf ("ENTER YOUR NUMBER: ");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        if (n%i==0){
            printf("NUMBER IS NOT PRIME");
            break;
        }else{
            printf("NUMBER IS PRIME");
            break;
            
        }
        
    }
    

}