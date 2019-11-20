#include <stdio.h>
int main()
{
	int b;
	scanf("%d",&b);
	for(int x=2*b-1;x>=1;x=x-2,printf("\n"))
		for(int y=1;y<=x;y++)
			printf("*  ");
}
