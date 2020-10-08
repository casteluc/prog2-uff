#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {
    int shape;
    double base, altura, volume;
    char shapeName[10];

    printf("De qual poliedro voce deseja calcular o volume?\n");
    printf("1 - Cubo\n");
    printf("2 - Prisma (base hexagonal)\n");
    printf("3 - Piramide (base quadrada)\n\n");

    printf("Insira um numero: ");
    scanf("%d", &shape);

    switch (shape) {
        case 1: 
            strcpy(shapeName, "cubo");
            printf("\nCalculando o volume do(a) %s\n", shapeName);

            printf("Insira o tamanho da base do cubo: ");
            scanf("%lf", &base);

            volume = pow(base, 3);
            break;
        
        case 2:
            strcpy(shapeName, "prisma");
            printf("\nCalculando o volume do(a) %s\n", shapeName);

            printf("Insira o tamanho da base do prisma: ");
            scanf("%lf", &base);
            printf("Insira o tamanho da altura do prisma: ");
            scanf("%lf", &altura);

            volume = ((3 * pow(base, 2) * sqrt(3)) / 2) * altura;
            break;
        
        case 3:
            strcpy(shapeName, "piramide");
            printf("\nCalculando o volume do(a) %s\n", shapeName);

            printf("Insira o tamanho da base da piramide: ");
            scanf("%lf", &base);
            printf("Insira o tamanho da altura da piramide: ");
            scanf("%lf", &altura);

            volume = pow(base, 2) * altura / 3;
            break;
        
        default: 
            printf("Entrada invalida");
    }

    printf("\nO volume do(a) %s eh %.2lf", shapeName, volume);

    return 0;
}