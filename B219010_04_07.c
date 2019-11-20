#include <stdio.h>
#include <math.h>
int main()
{
	printf("Enter values of a b c\n");
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a==b && b==0)
		printf("There is no solution");
	else if(a==0)
		printf("Root is %.2f",-c/(1.0*b));
	else if(b*b-4*a*c<0)
		printf("No real roots");
	else 
		printf("Roots are %.2f and %.2f",(-b/(2.0*a)+pow((b*b-4*a*c)*1.0,0.5)/(2.0*a)),(-b/(2.0*a)-pow((b*b-4*a*c)*1.0,0.5)/(2.0*a)));
	return 0;
}
