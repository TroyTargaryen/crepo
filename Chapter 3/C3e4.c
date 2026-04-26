#include<stdio.h>

int main(void){
    int area,exchange,number;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &area,&exchange,&number);
    printf("You entered %d.%d.%d\n", area,exchange,number);
    return 0;
}