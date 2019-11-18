#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter parameters of rectangle in format l b\n");
    float l,b;
    scanf("%f %f", &l, &b);
    printf("Perimeter of rectangle is %.2f\n", 2*(l+b));
    printf("Area of rectangle is %.2f", l*b);
    return(0);
}
