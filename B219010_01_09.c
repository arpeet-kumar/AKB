#include <stdio.h>
#include <stdlib.h>
int main()
{
    int fib1=0, fib2=1, fib3=1;
    int c=1;
    printf("%d\n",fib1);
    printf("%d\n",fib2);
    while (c<=10)
    {
        printf("%d\n", fib3);
        fib1=fib2;
        fib2=fib3;
        fib3=fib1+fib2;
        c++;
    }
    return(0);
}
