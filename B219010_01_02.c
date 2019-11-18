 #include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter 4 number in the format nn nn nn nn <return>\n");
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    float avg=(a+b+c+d)/4.0;
    printf("Avg is %.2f\n", avg);
    printf("Deviation of %d is %.2f\n", a, -(avg-a*1.0) );
    printf("Deviation of %d is %.2f\n", b, -(avg-b*1.0) );
    printf("Deviation of %d is %.2f\n", c, -(avg-c*1.0) );
    printf("Deviation of %d is %.2f\n", d, -(avg-d*1.0) );
    return(0);
}
