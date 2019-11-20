#include <stdio.h>
int main()
{
   printf("How many numbers do u want to enter?     ");
   int k;
   scanf("%d",&k);
   int n[k+1];
   float s;
   for (int x=0;x<k;x++)
   {
       int m;
       scanf("%d",&m);
       n[x]=m;
       if(x==0)
       {
           n[k]=n[0];
       }
       if(n[x]>n[k])
       {
           n[k]=n[x];
       }
   }
   int co=0;
   for(int x=0;x<k;x++)
   {
    if( n[k]==n[x])
        co++;
   }

   printf("%d %d",n[k],co);
}
