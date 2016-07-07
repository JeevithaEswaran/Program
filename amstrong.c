#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n,sum=0,rem=0;
clrscr();
printf("\nEnter a number:");
scanf("%d",&n);
n1=n;
while(n!=0)
{
rem=n%10;
n=n/10;
sum=sum+(rem*rem*rem);
}
if(sum==n1)
	printf("\nThe given number is an amstrong number");
else
	printf("\nThe given number is not an amstrong number");
getch();
}
