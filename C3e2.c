#include<stdio.h>

int main(void){
    int i,m,d,y;
    float u;
    printf("Enter item number: ");
    scanf("%d", &i);
    printf("Enter unit price: ");
    scanf("%f", &u);
    printf("Enter purchase date: ");
    scanf("%d/%d/%d", &m,&d,&y);

    printf("Item\tUnit\t\tPurchase\n\tPrice\t\tDate\n");
    printf("%d\t$  %5.2f\t%d/%d/%d\n", i,u,m,d,y);
    return 0;
}