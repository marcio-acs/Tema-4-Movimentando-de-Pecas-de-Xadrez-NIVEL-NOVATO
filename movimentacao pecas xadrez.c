#include <stdio.h>
int main(){
    int i;

    // loop for
    printf("Torre se movimentando 5 casas para a direita\n");
    for (int i = 0; i < 5; i++){
        printf("Direita\n");
    }

    printf("Bispo se movimentando 5 casas na diagonal para cima e direita\n");
    // loop while iniciando em 0
    i = 0;
    while (i < 5)
    {
        printf("Cima, Direita\n");
        i++;
    }

    //loop do iniciando em 1
    printf("Rainha se movimentando 8 casas pra a esquerda\n");
    i = 0;
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    

    return 0;
}