#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, j, triangSup = 0, triangInf = 0;
    double A[25][25], B[25], X[25], sub;

    printf("Insira o valor de n (<= 25): ");
    scanf("%d", &n);
    // M igual ao valor de n menos 1 para evitar repetições mais a frente no código
    m = n - 1;

    // Registra os dados da matriz A
    printf("\nInsira os valores da matriz A(n x n) um a um:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &A[i][j]);
            
            // Confere se a matriz sendo inserida é triangular ou não
            if (j > i) {
                if (A[i][j] != 0) triangInf = 1;
            } else if (j < i) {
                if (A[i][j] != 0) triangSup = 1;
            }
        }
    }

    // Registra os dados da matriz B se a matriz A for triangular
    if (triangInf == 0 || triangSup == 0) {
        printf("\nInsira os valores da matriz B(n x 1): \n");
        for (i = 0; i < n; i++) {
            scanf("%lf", &B[i]);
        }
    }

    // Calcula os valores da matriz X se A for triangular inferior
    if (triangInf == 0) {
        X[0] = B[0] / A[0][0];
        for (i = 1; i < n; i++) {
            sub = 0;
            for (j = 0; j < n; j++) {
                sub = sub + (A[i][j] * X[j]);
            }
            X[i] = (B[i] - sub) / A[i][i]; 
        }
    }

    // Calcula os valores da matriz X se A for triangular superior
    // Lembrando que m = n - 1
    if (triangSup == 0) {
        X[m] = B[m] / A[m][m];
        for (i = 1; i < n; i++) {
            sub = 0;
            for (j = 0; j < n; j++) {
                sub = sub + (A[m - i][m - j] * X[m - j]);
            }
            X[m - i] = (B[m - i] - sub) / A[m - i][m - i]; 
        }
    }

    // Imprime a matriz X na tela se a matriz A for triangular
    if (triangInf == 0 || triangSup == 0) {
        printf("\nA matriz X eh:");
        for (i = 0; i < n; i++) {
            printf("\n%.2lf", X[i]);
        }
    }
    
    return 0;
}