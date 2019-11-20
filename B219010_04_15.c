#include<stdio.h>
void pyramid(int);
void pyramidr(int);
int main(void)
{
    int h;
    printf("Enter an odd number height\t");
    scanf("%d",&h);
    if (h%2==0)
    {
        printf("Enter an odd number kiddo");
        return 0;
    }
     h=(h+1)/2;
    pyramid(h);
    pyramidr(h);
    return 0;
}
void pyramid(int h)
{
    for (int i=h;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
            printf("@  ");
        for(int j=1;j<=(h-i)*2-1;j++)
            printf("   ");
        for(int j=1;j<=i;j++)
        {
            if (j==1 && i==h)
                continue;
            printf("@  ");
        }
        printf("\n");
    }
}
void pyramidr(int h)
{
    for (int i=2;i<=h;i++)
    {
        for(int j=1;j<=i;j++)
            printf("@  ");
        for(int j=1;j<=(h-i)*2-1;j++)
            printf("   ");
        for(int j=1;j<=i;j++)
        {
            if (j==1 && i==h)
                continue;
            printf("@  ");
        }
        printf("\n");
    }
}
