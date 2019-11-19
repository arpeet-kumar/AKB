#include<stdio.h>
int main()
{
    float x,y,p;
    printf("Enter 2 numbers in the format nn nn\n");
    scanf("%f %f",&x,&y);
    p=x*y;
    float s=x+y;
    float total=s*s+p*(s-x)+(p+y);
    printf("total= %f\n",total);
    return 0;
}

