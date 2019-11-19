#include <stdio.h>
int main()
{
    printf("Enter in celsius\n");
    float a;
    scanf("%f", &a);
    printf("%f celsius  is %f fahrenheit", a,(32+a*180.0/100));
    return(0);
}
