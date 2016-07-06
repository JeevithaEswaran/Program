#include <stdio.h>
#include<conio.h>
void main()
{
    char ch;
    clrscr()
    printf("\nEnter any character: ");
    scanf("%c", &ch);
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("\n%c is an ALPHABET", ch);
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("\n%c is DIGIT", ch);
    }
    else 
    {
        printf("\n%c is SPECIAL CHARACTER", ch);
    }
getch();
} 

