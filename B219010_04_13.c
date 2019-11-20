#include <stdio.h>
int main()
{
   printf("How many numbers do u want to enter?     ");
   int k;
   scanf("%d",&k);
   int n[k+2];
   float s;
   for (int x=0;x<k;x++)
   {
       int m;
       scanf("%d",&m);
       s+=m*1.0;
       n[x]=m;
       if(x==0)
       {
           n[k+1]=n[0];
           n[k]=n[0];
       }
       if(n[x]>n[k+1])
       {
           n[k+1]=n[x];
       }
       if(n[x]<n[k])
       {
           n[k]=n[x];
       }
   }
   for(int x=0;x<k+2;x++)
    printf("%d  ",n[x]);
   printf("%.2f",s/(k*1.0));
}
