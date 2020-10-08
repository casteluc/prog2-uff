#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n, fib = 1, prevFib = 0, temp;

    printf("Calculando o n-esimo termo da sequencia de Fibonacci");
    printf("\nInsira o valor de n: ");
    scanf("%i", &n);

    for (i = 0; i < n - 1; i++) {
        temp = fib;
        fib = fib + prevFib;
        prevFib = temp;
    }

    printf("O numero na posicao %d da sequencia de Fibonacci eh: %d", n, fib);

    return 0;
}