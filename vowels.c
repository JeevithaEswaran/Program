#include<stdio.h>
#include<conio.h>
void main()
{
int ch;
clrscr();
printf("\nEnter a character : ");
scanf("%c",&ch);
if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'||)
  printf("\nThe character is a vowel");
else
  printf("\nThe character is not a vowel");
getch();
}
