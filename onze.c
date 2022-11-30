#include <stdio.h>

double sequencia(int n) {
    int i, valor[n],j, valorFinal;
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        if(n % i == 0) {
        printf ("%d\n",i);
        }
    }
}

int main() {
   
    int n;
    sequencia(n);


   return 0;
}