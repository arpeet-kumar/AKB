#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter in radian\n");
    float a;
    scanf("%f", &a);
    a=a*57.295;
    if (a>360.0)
        a=a-360.0*((int)a/360);
    printf("Degree is %.3f", a);
    return(0);
}
