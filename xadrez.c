#include <stdio.h>

int main(){

    int i = 0;
    int r = 0;
    int movimentoCompleto = 1; //flag para controlar o movimento em "L";

    //Mover a Torre 5 casas para a direita
    printf("Movimentando a Torre...\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n"); //Imprime a direção do movimento
    }
   
    //Mover o Bispo 5 casas na diagonal para cima e à direita 
    printf("Movimentando o Bispo...\n");

    while (i <= 5)
    {
        printf("Cima, Direita\n");
        i++;
    }
    //Mover a Rainha oito casas para a esquerda 
    printf("Movimentando a Rainha...\n");

    do 
    {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    //Mover o Cavalo em "L"
    printf("Movimentando o Cavalo...\n");

    while (movimentoCompleto--)
    {
        for (int i = 0; i <2; i++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
    }

    return 0;
}
