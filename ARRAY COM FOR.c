#include <stdio.h>

int main() {
    int numeros[6] = {3, 7, 15, 2, 9, 4};
    int soma = 0;

    for (int i = 0; i < 6; i++) {
        soma += numeros[i];
        printf("numeros[%d] = %d\n", i, numeros[i]);
    }

    printf("Soma total: %d\n", soma);

    return 0;
}