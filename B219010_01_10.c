#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter a number between 0 to 32767\n");
    int a;
    scanf("%d", &a);
    int bup=a,p=1;
     while(a>0)
    {
    p=p*10;
     a=a/10;
    }
    a=bup;
    //printf("%d\n",p);
    while(a>0)
    {
     printf("%d\n",a);
     p=p/10;
     a=a%p;
    }

    return(0);
}
