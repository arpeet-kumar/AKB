#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter a number\n");
    float a;
    scanf("%f", &a);
    int c=a;
    printf("Last 2nd digit of your number is %d", (c%100)/10);
    return(0);
}
