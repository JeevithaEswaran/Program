#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i;
clrscr();
printf("\nEnter first and last number : ");
scanf("\n%d\t%d",&a,&b);
printf("\nEven numbers between %d and %d:",a,b);
for(i=a;i<=b;i++)
{
if(i%2==1)
	printf("\n%d",i);
}
getch();
}
