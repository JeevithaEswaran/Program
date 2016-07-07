#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,count,i,j,rem=0;
clrscr();
printf("\nEnter first and last number : ");
scanf("\n%d\t%d",&a,&b);
printf("\nThe prime numbers between %d and %d:",a,b);
for(j=a;j<=b;j++)
{
count=0;
for(i=2;i<=j/2;i++)
{
  rem=j%i;
  if(rem==0)
    {
    count++;
    break;
    }
}
if(count==0&&j!=1)
  printf("\n%d",j);
}
getch();
}
