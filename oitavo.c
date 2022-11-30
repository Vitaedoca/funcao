#include <stdio.h>

double juros(int c, int m, int t) {
   return c * m * t;
}

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%.1lf",juros(a, b, c));
   return 0;
}