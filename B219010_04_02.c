#include <stdio.h>
int main()
{
	int ax,ay,bx,by;
printf("Enter two coordinates in the format <(x,y) (x,y)>\n");
scanf("(%d,%d) (%d,%d)",&ax,&ay,&bx,&by);
if ((ax-bx)==0)
	printf("Line is parallel to x-axis");
else if (ay==by)
	printf("Line is parallel to y-axis");
else
	printf("Slope of the line segment is %.2f\n",(ay-by)*1.0/(ax-bx));
return 0;
}

