#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[20], B[20], C[40], n1, n2, i, e, aux;
    
    printf("Insira o tamanho do vetor A: ");
    scanf("%d", &n1);
    printf("Insira os valores do vetor A um a um: \n");
    for (i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
        C[i] = A[i]
    }

    printf("Insira o tamanho do vetor B: ");
    scanf("%d", &n2);
    printf("Insira os valores do vetor B um a um: \n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
        C[i + n1] = B[i];
    }

    for (i = 0; i < (n1 + n2); i++) {
        for (e = 0; e < (n1 + n2 - 1); e++) {
            if(C[e] > C[e + 1]) {
                aux = C[e];
                C[e] = C[e + 1];
                C[e + 1] = aux;
            }
        }
    }

    printf("\nLista ordenada C (A + B):\n");
    for (i = 0; i < (n1 + n2); i++) {
        printf("%d ", C[i]);
    }

    return 0;
}