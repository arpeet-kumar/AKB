#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter a number \n");
    int a;
    scanf("%d", &a);
    printf("Reverse number   ");
    while(a>0)
    {
     printf("%d",a%10);
     a=a/10;
    }

    return(0);
}
