#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int *a, int  *b){
    int aux;
    printf("ENTROU NO BUBBLE SORT\n");
    if( a > b){
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

void pegarvetor(int *V, int b){
    int i, j;
    for(i = 0; i < b; i++){
        for(j = i + 1; j < b; j++){
        printf("PEGOU OS VALORES\n");
        BubbleSort(&V[j], &V[i]);
        }
    }
}

int main(){
    int TAM, TAM2, i, j;

    printf("Digite o tamanho do primeiro vetor: ");
    scanf("%d", &TAM);

    printf("Digite o tamanho do segundo vetor: ");
    scanf("%d", &TAM2);

    int vetorA[TAM], vetorB[TAM2];

    for(i = 0; i < TAM; i++){
        printf("Digite o elemento da posicao %d do vetor: ", i);
        scanf("%d", &vetorA[i]);
    }

    for(i = 0; i < TAM2; i++){
        printf("Digite o elemento da posicao %d do vetor: ", i);
        scanf("%d", &vetorB[i]);
    }

    pegarvetor(vetorA, TAM);

    for(i = 0; i < TAM; i++){
        printf("%d ", vetorA[i]);
    }

    return 0;
}