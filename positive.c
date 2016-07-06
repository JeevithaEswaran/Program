#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
if(n==0)
  printf("The given number is neither positive nor negative");
else if(n>0)
  printf("The given number is positive");
else
  printf("The given number is negative");
getch();
}
  
