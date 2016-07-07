#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,mul;
clrscr();
printf("\nEnter a number :");
scanf("%d",&n);
printf("\nThe multiplication table of %d:\n",n);
for(i=1;i<=16;i++)
{
mul=n*i;
printf("\n%d * %d = %d",n,i,mul);
}
getch();
}
