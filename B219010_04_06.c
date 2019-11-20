#include<stdio.h>
int largest(int[]);
int smallest(int[]);
int main()
{
	int c[5]; 
	char ch;
	for (int x=0;x<5;x++)
	{
		scanf("%d",&c[x]);
	}
	int s;
	printf("Enter L for largest, S for smallest, T for sum or A for average:\n");
	scanf(" %c",&ch);
	switch (ch)
	{
		case 'L':
		printf("%d",largest(c));
		break;
		case 'S':
		printf("%d",smallest(c));
		break;
		case 'T':
		case 'A':
		for (int x=0;x<5;x++)
		{
			s+=c[x];
		}
		if(ch=='T')
			printf("%d",s);
		else
			printf("%.2f",s*0.2);
		break;
		default:
		printf("Wrong Input\n");
	}
}
int largest(int c[])
{
	for (int x=1;x<5;x++)
	if(c[x]>c[0])
		c[0]=c[x];
	return c[0];
}
int smallest(int c[])
{
	for (int x=1;x<5;x++)
	if(c[x]<c[0])
		c[0]=c[x];
	return c[0];
}
