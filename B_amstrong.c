#include <stdio.h>
#include<conio.h>
void main()
{
    int i, a,b, num, sum = 0,rem=0;
    printf("Enter first and last number : ");
    scanf("%d\t%d", &a,&b);
    printf("All Armstrong numbers between %d to %d:\n", a,b);
    for(i=a; i<=b; i++)
    {
	num = i;
	sum = 0;
	while(num!=0)
	{
	    rem = num % 10;
	    sum += rem * rem * rem;
	    num = num / 10;
	}
	if(i==sum)
	{
	    printf("%d\n", i);
	}
    }
    getch();
}
