#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter your marks in quizzes out of 100 marks (nn nn nn nn)\n");
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    float avgd=(a+b+c+d)/400.0;
    printf("Enter your marks in mid terms out of 100 marks (nn nn)\n");
    scanf("%d%d",&a,&b);
    float avgm=(a+b)/200.0;
    printf("Enter your marks in end term out of 100 marks (nn)\n");
    scanf("%d",&a);
    printf("Avg Score is %.2f", 0.3*avgd+0.4*avgm+0.3*a );
    return(0);
}
