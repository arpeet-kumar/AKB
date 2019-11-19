#include<stdio.h>
int main()
{
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    printf("Enter 10 numbers in the format nn nn nn nn nn nn nn nn nn nn nn...\n");
    scanf("%d %d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10);
    printf("%d\t%d\n",a1,a10);
    printf("%d\t%d\n",a2,a9);
    printf("%d\t%d\n",a3,a8);
    printf("%d\t%d\n",a4,a7);
    printf("%d\t%d\n",a5,a6);
    return 0;
}

