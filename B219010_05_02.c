#include <stdio.h>
int yk=0,y,ret;
int ch[12]={1,1,1,1,1,1,1,1,1,1,1,1};
int end[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int month(int);
int date(int);
int blank(int);
void days(int);
void main(void)
{
	printf("Enter a year:	");
	scanf("%d",&y);
	printf("%32d\n",y);
	if(y%400==0||(y%4==0&&y%100!=0))
		yk++;
	if(yk>0)
		end[1]=29;
	y--;
	y=(y*365+y/4-y/100+y/400)%7;
	for(int x=1;x<=4;x++)
	{
		month(x);
		date(x);
		printf("\n");
	}
}
int month(int x)
{
	if(x==1)
		printf("%6cJanuary%15cFebruary%14cMarch\n",' ',' ',' ');
	else if(x==2)
		printf("%6cApril%17cMay%19cJune\n",' ',' ',' ');
	else if(x==3)
		printf("%6cJuly%18cAugust%16cSeptember\n",' ',' ',' ');
	else
		printf("%8cOctober%13cNovember%14cDecember\n",' ',' ',' ');
	for(int i=1;i<=3;i++)
		printf("Su Mo Tu We Th Fr Sa  ");
	printf("\n");
}
int date(int x)
{
	for(int z=1;z<=6;z++)
	{
		for(int i=x*3-2;i<=x*3;i++)
		{
			if (z==1)
				ret=blank(i);
			else
				ret=0;
			days(i);
		}
		printf("\n");
	}
}
int blank(int x)
{
	int d=1;
	switch(x)
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
		d+=(yk>0)?29:28;
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
		printf("%18c",' ');
		break;
		case 5:
		printf("%15c",' ');
		break;
		case 4:
		printf("%12c",' ');
		break;
		case 3:
		printf("%9c",' ');
		break;
		case 2:
		printf("%6c",' ');
		break;
		case 1:
		printf("%3c",' ');
		break;
		case 0:
		break;
	}
	return d;
}
void days(int x)
{
	for(int z=ret;z<7;z++,ch[x-1]++)
		if(ch[x-1]<=end[x-1])
			printf("%2d ",ch[x-1]);
		else
			printf("   ");
	printf(" ");
}
