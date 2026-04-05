#include <stdio.h>

int main() {
    printf("exemplo 1: contagem crescente\n");
    
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    printf("exemplo 2: soma de numeros\n");
    int soma = 0;
    
    for (int j = 1; j <= 5; j++) {
        soma += j;
        printf("adicionando %d... soma parcial: %d\n", j, soma);
    }
    
    printf("soma total final: %d\n\n", soma);
    
    printf("exemplo 3: contagem regressiva\n");
    for (int k = 5; k > 0; k--) {
        printf("%d...", k);
    }
    printf("fogo!\n");
    
    return 0;
}