#include <stdio.h>

double delta(int a, int b, int c) {
    scanf("%d %d %d", &a, &b, &c);
    return(b * b) - (4 * a * c);
}

int main() {
   
    int a, b, c;
    printf("%.1lf",delta(a, b, c));


   return 0;
}