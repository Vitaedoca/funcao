#include <stdio.h>
#include <math.h>

double par(int a, int b) {
    int i, soma = 0;
    for(i = a; i <= b; i++ ) {
        if(i % 2 == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    printf("%.2lf",par(a, b));
    
   return 0;
}