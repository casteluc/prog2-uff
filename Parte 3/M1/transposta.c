#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[25][30], B[30][25], m, n, i, j;

    printf("Insira o valor de m (<=25): ");
    scanf("%d", &m);

    printf("Insira o valor de n (<=30): ");
    scanf("%d", &n);

    printf("\nInsira os valores da matrix (m x n) uma a um:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            B[j][i] = A[i][j];
        }
    }

    printf("\nA matriz B transposta de A eh:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}