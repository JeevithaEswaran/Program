#include<stdio.h>
#include<conio.h>
void main()
{
int n,sum=0;
clrscr();
printf("\nEnter the last number : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
  sum=sum+i;
printf("\nSum of natural numbers=%d",sum);
getch();
}
