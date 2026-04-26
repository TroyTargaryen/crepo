#include<stdio.h>

int main(void){

    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
    printf("%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p);
    printf("Row sums: %d %d %d %d\n", a+b+c+d, e+f+g+h, i+j+k+l, m+n+o+p);
    printf("Column sums: %d %d %d %d\n", a+e+i+m, b+f+j+n, c+k+g+o, d+h+l+p);
    printf("Diagonals sums: %d %d\n", d+g+j+m, a+f+k+p);
    return 0;
}