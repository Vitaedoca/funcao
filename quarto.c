#include <stdio.h>
#include <string.h>

double pares(int a, int b,  int c) {
    int cont = 0;
    if(a % 2 ==0) cont++;
    if(b % 2 ==0) cont++;
    if(c % 2 ==0) cont++;

    return cont;
}

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%.1lf",pares(a, b, c));


   return 0;
}