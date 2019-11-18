#include<conio.h>
#include<stdio.h>
void main()
{
int n,r;
printf("Enter the number\n");
scanf("%d",&n);
r=n%10;
printf("The right most digit is\t%d",r);
getch();
}
