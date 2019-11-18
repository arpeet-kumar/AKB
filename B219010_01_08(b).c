#include <stdio.h>
int main()
{
    for(int i=1;i<=8;i++)
    {
    	if(i==8)
    		printf("%d",2*(i-1));
    	else
        	printf("%d, ",2*(i-1));
    }
    return(0);
}
