#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));
    int n;
    for (int x=1;x>0;x++)
    {
        n=rand()%100;
        if(n>=1&&n<=20) break;
    }
    int flag=0;
    printf("I am thinking of a number between 1 and 20.\nCan you guess what it is?   ");
    int m;
    for(int x=1;x<=5;x++)
    {
        scanf("%d",&m);
        if(m==n)
        {
            printf("\nCongratulations!! You did it :)");
            flag++;
            break;
        }
        else
            if (x==5)
            break;
        if(m>n)
            printf("Your guess is high. Try again:  ");
        else
            printf("Your guess is low. Try again:  ");
    }
    if(flag==0)
    {
        printf("Sorry.. :( The Number was %d.\nYou should have gotten it by now.\nBetter luck next time..",n);
    }
    return 0;
}
