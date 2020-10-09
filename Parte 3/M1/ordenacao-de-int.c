#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, nums[25], i, e, aux;

    printf("Insira o valor de n: ");
    scanf("%d", &n);

    printf("\nInsira os valores a serem ordenaos um a um:");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        for (e = 0; e < n - 1; e++) {
            if(nums[e] > nums[e + 1]) {
                aux = nums[e];
                nums[e] = nums[e + 1];
                nums[e + 1] = aux;
            }
        }
    }
    
    printf("\nLista ordenada por bubble sort:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}