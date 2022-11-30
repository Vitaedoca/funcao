#include <stdio.h>
#include <math.h>

double raiz(int a, int b, int c) {
    double delta = (b * b) - (4 * a * c);
    double rai = sqrt(delta);
    double razP = (-b + rai) / (2 * a);
    double razN = (-b - rai) / (2 * a);

    if (rai < 0) printf("imprima não existem raízes");
    else if (rai = 0) printf("\n%.3lf",razP);
    else printf("\n%.3lf %.3lf",razP, razN);
}

int main() {
    int a, b, c;
    
    scanf("%d %d %d", &a, &b, &c);
    raiz(a, b, c);


   return 0;
}