#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("Rightmost digit of integral part is %d\n",x%10);
    return 0;
}
