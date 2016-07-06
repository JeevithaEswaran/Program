#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("\nEnter a year : ");
scanf("%d",&n);
if(n%4==0)
  printf("\nThe given year is a leap year");
else
  printf("\nThe given year is not a leap year");
getch();
}
