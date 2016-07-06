#include<stdio.h>
#include<conio.h>
void main()
{
int n,i=1,sum=0;
clrscr();
printf("\nEnter the last number : ");
scanf("%d",&n);
while(i<=n)
{
  sum=sum+i;
  i++;
}
printf("Sum of natural numbers=%d",sum);
getch();
}
