#include<stdio.h>
int main()
{
    int a1,a2,a3;
    printf("Enter 3 numbers in the format nn nn...\n");
    scanf("%d %d %d",&a1,&a2,&a3);
    printf("Your numbers forward:\n%d\n%d\n%d\nYour numbers backward:\n%d\n%d\n%d\n",a1,a2,a3,a3,a2,a1);
    return 0;
}

