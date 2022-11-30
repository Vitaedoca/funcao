#include <stdio.h>

double maior(int x, int y) {
    scanf("%d %d", &x, &y);
    double subtracao = x - y;
    if (subtracao < 0) return y;
    else if (subtracao > 0) return x;
    else return x;
    
}

int main() {
   
    int x, y;
    printf("%.1lf",maior(x, y));


   return 0;
}