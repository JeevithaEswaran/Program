#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,b=1,temp,n,i;
clrscr();
printf("\nEnter the limit: ");
scanf("%d",&n);
printf("\nThe fobonacci series is : ");
printf("\n%d\n%d",a,b);
for(i=1;i<=n-2;i++)
{
temp=a+b;
a=b;
b=temp;
printf("\n%d",temp);
}
getch();
}

