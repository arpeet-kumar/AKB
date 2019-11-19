#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    printf("2nd Rightmost digit of integral part is %d\n",(x%100-x%10)/10);
    return 0;
}
