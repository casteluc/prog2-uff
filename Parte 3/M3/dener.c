#include <stdio.h>
#include <stdlib.h>


void BubbleSort(int *vetor, int tamanho){
    int i, j, aux;

    for(i = 0; i < tamanho; i++){
        for(j = i + 1; j < tamanho - 1; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
        }
    }
    }
}

void InsertionSort(int *vetor, int tamanho){

    int i, j, aux;

    //coloco o valor 1 pra ele ja comecar comparando o segundo elemento com o primeiro(que vai ser o 0 do outro coiso)
    for(i = 1; i < tamanho; i++){

        aux = vetor[i];

        //isso eh pra ele olhar o elemento A ESQUERDA
        j = i - 1;

        //enquanto o indice for maior ou igual a 0 AND o valor vetor[i] for menor que o elemento a esquerda
        while((j >= 0) && (aux < vetor[j])){
            vetor[j+1] = vetor[j];
            j--;
        }

        //aqui o J vai estar valendo -1, somando um ele vai se referir a primeira posicao do vetor
        // logo, a primeira posicaoo vai receber o valor de aux, que eh o menor valor encontrado no momento
        vetor[j+1] = aux;
    }
}

void SelectionSort(int *vetor, int tam){

    int i, j, aux, index;

    for(i = 0; i < tam; i++){
        for( j = i+1; j < tam - 1; j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[j];
                index = j;
        }
        vetor[index] = vetor[i];
        vetor[i] = aux;
        }
    }
}

int main(){

    int resposta, tam, i;
    
    printf("Digite o tamanho do vetor que vc quer: ");
    scanf("%d", &tam);

    int vetor[tam];

    for(i = 0; i < tam; i++){
        printf("Digite um numero pra colocar no vetor: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite qual metodo de ordenacao vc quer fazer:\n1-Bubble Sort\n2-Insertion Sort\n3-Selection Sort\n");
    scanf("%d", &resposta);

    switch(resposta){
        case 1:
            BubbleSort(vetor, tam);
            break;

        case 2:
            InsertionSort(vetor, tam);
            break;

        case 3:
            SelectionSort(vetor, tam);
            break;
        default:
            break;
    }

    for(i = 0; i < tam; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}
