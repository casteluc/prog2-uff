#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void bubbleSort(int *V, int n){
    int i, e, aux;

    for (i = 0; i < n; i++) {
        for (e = 0; e < n - 1; e++) {
            if ( V[e] > V[e + 1] ) {
                aux = V[e];
                V[e] = V[e + 1];
                V[e + 1] = aux;
            }
        }
    }
}

void mergeArrays(int *A1, int *A2, int n1, int n2, int *B) {
    int i;
    for (i = 0; i < n1; i++) B[i] = A1[i];
    for (i = n1; i < n2 + n1; i++) B[i] = A2[i - n1];
}

int main(){
    int n1, n2, i;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &n1);

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &n2);

    int A1[n1], A2[n2], B[n1 + n2];

    for(i = 0; i < n1; i++){
        printf("Digite o elemento da posicao %d do vetor A1: ", i);
        scanf("%d", &A1[i]);
    }

    for(i = 0; i < n2; i++){
        printf("Digite o elemento da posicao %d do vetor A2: ", i);
        scanf("%d", &A2[i]);
    }

    mergeArrays(A1, A2, n1, n2, B);
    bubbleSort(B, n1 + n2);

    for(i = 0; i < n1 + n2; i++){
        printf("%d ", B[i]);
    }

    return 0;
}