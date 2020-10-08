#include <stdio.h>
#include <stdlib.h>

int main() {
    int A[20], x, i, e, apparitions = 0, sumIsEqualX = 1, entry;

    printf("Insira o valor de x: ");
    scanf("%d", &x);

    printf("Insira os 20 valores do vetor um a um:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &entry);

        A[i] = entry;
        if (x == entry) apparitions++;

        for (e = 0; e < i; e++) {
            if (A[e] + entry == x) sumIsEqualX = 0;
        }
    }

    if (apparitions == 0) printf("\nX nao pertence ao vetor A");
    else {
        printf("\nX pertence ao vetor A");
        printf("\nX aparece %d vezes no vetor A", apparitions);
    };

    if (sumIsEqualX == 1) printf("\nNenhuma soma de dois numeros do vetor A eh igual a x");
    else printf("\nExiste soma de dois elementos do vetor A que eh igual a x");

    return 0;
}