#include <stdio.h>
float charge(char,int);
int main()
{
	char ch;
	int hr, min;
	printf("Type of vehicle  ");
	scanf("%c", &ch);
	int hr1, min1;
	printf("Hour vehicle entered the lot (0 - 23)?  ");
	scanf("%d",&hr);
	printf("Minute vehicle entered the lot (0 - 59)?  ");
	scanf("%d", &min);
	printf("Hour vehicle left the lot(0-23)?  ");
	scanf("%d",&hr1);
	printf("Minute vehicle left the lot(0-59)?  ");
	scanf("%d",&min1);
	int hr2=(hr1-hr);
	hr2=hr2>0?hr2:hr2+24;
	int min2=(min1-min);
	if (min2<0)
		hr2--;
	min2=(min2>=0)?min2:min2+60;
	int r=hr2;
	if (min2>30)
		r++;
	float f= charge(ch,r);
	printf("            PARKING LOT CHARGE\n");
	printf("Type of vehicle: Car or Bus or Truck\n");
	printf("TIME-IN              %02d : %02d\n",hr,min);
	printf("TIME-OUT             %02d : %02d\n",hr1,min1);
	printf("                     -------\n");
	printf("PARKING TIME         %02d : %02d\n",hr2,min2);
	printf("ROUNDED TOTAL             %2d\n",r);
	printf("TOTAL CHARGE       $%3d : %02d\n",(int)f,(int)(f*100.0)-((int)f)*100);
	return 0;
}
float charge(char c,int r)
{
	switch (c)
	{
		case 'c':
		case 'C':
		return (r>3)?(r-3)*1.50:0.0;
		break;
		case 'T':
		case 't':
		return (r>2)?2.0+(r-2)*2.30:r*1.0;
		break;
		case 'B':
		case 'b':
		return (r>1)?3.70*(r-1):2.0;
		break;
		default:
		return 0;
	}
}
