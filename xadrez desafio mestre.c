#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
void moverBispo(int casas) {
    if (casas > 0) {
        
        printf("Cima, Direita\n");
        moverBispo(casas - 1);
    }
}
void moverRainha(int casas) {
    if (casas > 0) {
        
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main(){

    int movimentoCompleto = 1;

    printf("Movimentando a Torre...\n");
    moverTorre(5);

    printf("Movimentando o Bispo...\n");
    moverBispo(5);

    printf("Movimentando a Rainha...\n");
    moverRainha(8);

    printf("Movimentando o Cavalo...\n");

    while (movimentoCompleto--)
    {
        for (int i = 0; i <2; i++){
            printf("Cima\n");
        }
        printf("Esquerda\n");
    }
    

    return 0;
}