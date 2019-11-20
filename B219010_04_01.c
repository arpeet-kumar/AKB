#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Enter marks of 3 Subjects in the format <nn nn nn>\n");
	scanf("%d %d %d", &a,&b,&c);
	double avg= (a+b+c)/3.0;
	if (avg>=90)
		printf("A");
	else if (avg>=70)
		if (c>90)
			printf("A\n");
		else 
			printf("B\n");
	else if (avg>=50)
		if ((c+b)/2.0>70)
			printf("C\n");
		else 
			printf("D\n");
	else
		printf("F\n");
	return 0;
}
