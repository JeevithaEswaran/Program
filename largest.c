#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c;
 clrscr();
 printf("\nEnter three numbers : ");
 scanf("\n%d\n%d\n%d",&a,&b,&c);
 if(a>b)
 {
  printf("\nThe largest number is a= %d",a);
}
  else if(b>c)
  printf("\nThe largest number is b= %d",b);
else
  printf("\nThe largest number is c= %d",c);
getch();
}
  
 
