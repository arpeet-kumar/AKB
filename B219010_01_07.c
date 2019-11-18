#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter temperature in F\n");
    float a;
    scanf("%f", &a);
    printf("Temperature in Celsius is %.2f", (a-32.0)*100/180.0);
    return(0);
}
