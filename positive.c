#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\nEnter a number : ");
scanf("%d",&n);
if(n==0)
  printf("\nThe given number is neither positive nor negative");
else if(n>0)
  printf("\nThe given number is positive");
else
  printf("\nThe given number is negative");
getch();
}
  
