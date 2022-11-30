#include <stdio.h>
#include <string.h>

double pares(int n, int a1,  int an) {

    return (n * (a1 + an) / 2);
}

int main() {
   
    int n, a1, an;
    scanf("%d %d %d", &n, &a1, &n);
    printf("%.1lf",pares(n, a1, an));

    return 0;
}