#include <stdio.h>
int main()
{
   double s=1.0; int p=1;
   for(int x=1;x>0;x++)
   {
       p*=x;
       double term=1.0/(p*1.0);
       if(x>1)
       {
          if((term-(1.0/((p+1)*1.0)))<0.00000001)
          {
              s+=(1.0/((p+1)*1.0));
              break;
          }
       }
       s+=term;
   }
   printf("%.8f",s);
}
