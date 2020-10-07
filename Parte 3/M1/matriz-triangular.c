#include <stdio.h>
#include <stdlib.h>

void main() {
    int n, i, j, e;
    float sub;

    // Requere ao usuário o valor de N
    printf("Insira o valor de N: ");
    scanf("%d", &n);

    // Aloca uma matriz na memória dinamicamente, de acordo com os dados inseridos pelo usuário
    float **A = (float**)malloc(n * sizeof(float*));

    for (i = 0; i < n; i++) { 
        A[i] = (float*) malloc(n * sizeof(float)); 
        for (j = 0; j < n; j++) {
            printf("Insira o valor do elemento (%d, %d) da matriz A: ", i, j);
            scanf("%f", &A[i][j]);
        }
    }

    float **B = (float**)malloc(n * sizeof(float*));

    for (i = 0; i < n; i++) { 
        B[i] = (float*) malloc(1 * sizeof(float)); 
        for (j = 0; j < 1; j++) {
            printf("Insira o valor do elemento (%d, %d) da matriz B: ", i, j);
            scanf("%f", &B[i][j]);
        }
    }

    float **X = (float**)malloc(n * sizeof(float*));

    for (i = 0; i < n; i++) { 
        X[i] = (float*) malloc(1 * sizeof(float)); 
        for (j = 0; j < n; j++) {
            sub = 0;
            if (i > 0) {
                for (e = 0; e < i; e++) {
                    // sub = sub + (A[i][e] * X[e][0]);
                }
            }   

            // printf("%.2f\n", sub);
            // printf("%.2f\n", (B[i][0] - sub) / (A[i][j]));

            X[i][0] = (B[i][0] - sub) / (A[i][j]);
        }
    }

    // // Imprime a matriz A na tela 
    // for (i=0; i < n; i++) {
    //     for (j=0; j < n; j++) {
    //         printf("%.2f\t", A[i][j]);
    //     }
    //     printf("\n");
    // }

    // // Imprime a matriz B na tela 
    // for (i=0; i < n; i++) {
    //     for (j=0; j < 1; j++) {
    //         printf("%.2f\t", B[i][j]);
    //     }
    //     printf("\n");
    // }

    // Imprime a matriz B na tela 
    for (i=0; i < n; i++) {
        for (j=0; j < 1; j++) {
            printf("%.2f\t", X[i][j]);
        }
        printf("\n");
    }
}