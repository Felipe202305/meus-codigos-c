#include <stdio.h>
#include <conio.h>

struct estrutura_jogadores
{int num;
    float peso;
    float alt;
    char i_nome;
};

int main(void)
{
    struct estrutura_jogadores jogador[3];
    float mais_baixo = 0.0, mais_gordo = 0.0;
    unsigned char indice = 0, inicial;

    for (indice = 0; indice < 3; indice++)
    {
        printf("digite o numero da camisa:\n");
        fflush(stdin);
        scanf("%d", &jogador[indice].num);
        printf("digite o peso:\n");
        fflush(stdin);
        scanf("%f", &jogador[indice].peso);
        printf("digite a altura:\n");
        fflush(stdin);
        scanf("%f", &jogador[indice].alt);
        printf("digite a letra inicial do nome:\n");
        fflush(stdin);
        scanf(" %c", &jogador[indice].i_nome);
    printf("\n\n");
    }

    mais_baixo = jogador[0].alt;
    inicial = jogador[0].i_nome;
    mais_gordo = jogador[0].peso;
    
    for (indice = 1; indice <3; indice++)
    {
        if (jogador[indice].peso>mais_gordo)
        if (jogador[indice].alt<mais_baixo)
        {
            mais_baixo = jogador[indice].alt;
            inicial = jogador[indice].i_nome;
        }
    }
    
    printf("\n\n");
    printf("a inicial do jogador mais baixo é: %c \n\n",inicial);
    printf("o jogador mais pesado tem: %3.2f quilos \n\n",mais_gordo);
    printf("pressione uma tecla para finalizar.");
    
    getch ();
    return 0;
}