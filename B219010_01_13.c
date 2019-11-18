#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter 2 numbers in the format nn nn\n");
    int a,b;
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swap numbers are\n");
    printf("%d\n",a);
    printf("%d\n",b);
    return(0);
}
