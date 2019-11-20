#include <stdio.h>
void main(void)
{
	int d,m,y;
	printf("Enter a date in the format <dd,mm,yyyy>:	");
	scanf("%d,%d,%d",&d,&m,&y);
	if(((y%400==0||(y%4==0&&y%100!=0))&&m>2))
		d++;
	y--;
	y=(y*365+y/4-y/100+y/400)%7;
	switch(m)
	{
		case 12:
		d+=30;
		case 11:
		d+=31;
		case 10:
		d+=30;
		case 9:
		d+=31;
		case 8:
		d+=31;
		case 7:
		d+=30;
		case 6:
		d+=31;
		case 5:
		d+=30;
		case 4:
		d+=31;
		case 3:
		d+=28;
		case 2:
		d+=31;
		case 1:
		break;
	}
	d+=y;
	d%=7;
	switch(d)
	{
		case 6:
		printf("Saturday\n"); break;
		case 5:
		printf("Friday\n"); break;
		case 4:
		printf("Thursday\n"); break;
		case 3:
		printf("Wednesday\n"); break;
		case 2:
		printf("Tuesday\n"); break;
		case 1:
		printf("Monday\n"); break;
		case 0:
		printf("Sunday\n"); break;
	}
}
