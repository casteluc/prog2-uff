#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

void main() {
    double a, b, c, x1, x2, delta;
    printf("Insira o valor de A: ");
    scanf("%lf", &a);
    printf("Insira o valor de B: ");
    scanf("%lf", &b);
    printf("Insira o valor de C: ");
    scanf("%lf", &c);

    delta = sqrt((b*b) - (4 * a * c));
    x1 = (-b + delta) / (2 * a);
    x2 = (-b - delta) / (2 * a);

    printf("\nO valor de x1 eh: %.2lf", x1);
    printf("\nO valor de x2 eh: %.2lf", x2);
}