#include <stdio.h>
#include <stdlib.h>

int main() {
    int pares = 0, impares = 0, i, n, entrada;

    printf("Insira a quantidade de numeros a serem analisados: ");
    scanf("%d", &n);

    printf("Insira os valores a serem analizados 1 a 1:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &entrada);
        if (entrada % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("\n%d Pares", pares);
    printf("\n%d Impares", impares);

    return 0;
}