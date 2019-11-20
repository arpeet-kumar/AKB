#include <stdio.h>
int main()
{
	int dd, mm, yyyy;
	printf("Enter today's date in the format <mm dd yyyy>");
	scanf("%d %d %d", &mm, &dd, &yyyy);
	int dd1, mm1, yyyy1;
	printf("Enter your birth date in the format <mm dd yyyy>");
	scanf("%d %d %d", &mm1, &dd1, &yyyy1);
	dd=dd-dd1;
	mm=mm-mm1;
	yyyy=yyyy-yyyy1;
	if (mm<0)
		printf("Your age is %d\n",yyyy-1);
	else if (mm==0)
		if (dd<0)
			printf("Your age is %d\n",yyyy-1);
		else 
			printf("Your age is %d\n",yyyy);
	else
		printf("Your age is %d\n",yyyy);
	return 0;
}
