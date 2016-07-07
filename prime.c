#include<stdio.h>
#include<conio.h>
void main()
{
int n,count=0,i,rem=0;
clrscr();
printf("\nEnter a number : ");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
  rem=n%i;
  if(rem==0)
    count++;
  else
    break;
}
if(count=>1)
  printf("Given number is a prime number");
else
  printf("Given number is not a prime number");
getch();
}
