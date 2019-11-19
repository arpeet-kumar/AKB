#include<stdio.h>
int main()
{
    int quantity;
    float UnitPrice;
    printf("Enter a quantity and its cost\n");
    scanf("%d %f",&quantity,&UnitPrice);

    printf("Quantity entered  %d\nIts Cost  %.2f\n",quantity,UnitPrice);
    return 0;
}

