#include <stdio.h>
#include <stdlib.h>

void main() {
    double priceUS, priceBR;

    printf("Insira o valor da compra em dolares: ");
    scanf("%lf", &priceUS);
    
    priceBR = 5.57 * priceUS;
    printf("O valor da compra em reais eh: %.2lf", priceBR);
}