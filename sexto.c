#include <stdio.h>

int sequencia(int b, int h) {
   int final = 0;
   if (b == h ) return 1;
   else return 0;
}

int main() {
   
    int b, h;
    scanf("%d %d", &b, &h);
    printf("%d",sequencia(b, h));


   return 0;
}