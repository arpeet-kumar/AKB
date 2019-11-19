#include <stdio.h>
#define tv 400.00
#define vc 220.00
#define rc 35.20
#define cd 300.00
#define tr 150.00
int main()
{
    printf("How many TVs were sold?  ");
    int atv;
    scanf("%d", &atv);
    printf("How many VCRs were sold?  ");
    int avc;
    scanf("%d", &avc);
    printf("How many Remote Controllers were sold?  ");
    int arc;
    scanf("%d", &arc);
    printf("How many CDs were sold?  ");
    int acd;
    scanf("%d", &acd);
    printf("How many Tape Recorders were sold?  ");
    int atr;
    scanf("%d", &atr);
    printf("QTY\tDESCRIPTION\tUNIT PRICE\tTOTAL PRICE\n");
    printf("---\t-----------\t----------\t-----------\n");
    printf("%d\tTV\t\t%.2f\t\t%.2f\n",atv,tv,atv*tv);
    printf("%d\tVCR\t\t%.2f\t\t%.2f\n",avc,vc,avc*vc);
    printf("%d\tREMOTE\t\t%.2f\t\t%.2f\n",arc,rc,arc*rc);
    printf("%d\tCD PLAYER\t%.2f\t\t%.2f\n",acd,cd,acd*cd);
    printf("%d\tTAPE RECORDER\t%.2f\t\t%.2f\n",atr,tr,atr*tr);
    printf("\t\t\t\t\t-----------\n");
    float sum=atv*tv+avc*vc+arc*rc+acd*cd+atr*tr;
    printf("\t\t\tSUBTOTAL\t%.2f\n",sum);
    printf("\t\t\tTAX\t\t%.2f\n",sum*0.36);
    printf("\t\t\tTOTAL\t\t%.2f\n",sum*1.36);
    return(0);
}
