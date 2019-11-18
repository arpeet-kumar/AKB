#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter a number\n");
    int a;
    scanf("%d", &a);
    if (a%2==0)
    printf("Even Number");
    else printf("Odd Number");
    return(0);
}
