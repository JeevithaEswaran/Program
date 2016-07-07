#include<stdio.h>
#include<conio.h>
void main()
{
 long n;
 int count=0;
 clrscr();
 printf("\nEnter the number : ");
 scanf("%l1d",&n);
 while(n!=0)
 {
   n=n/10;
   count++;
 }
 printf("\nTotal number of digits is:  %d",count);
 getch();
}
