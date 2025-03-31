#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças

    int i = 0;

    // Movimento da torre (5 casas para a direita)
    printf("Movimento da torre:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");    //imprime a direção do movimento
    }
    printf("\n");

        // Movimento do Bispo (5 casas diagonal "cima, direita")
        printf("Movimento do bispo:\n");

        while (i < 5)
        {
            printf("Cima, Direita\n");  //imprime a direçao do movimento
            i++;
        }
        printf("\n");

              // Movimento da Rainha (8 casas a esquerda)
              printf("Movimento da Rainha:\n");

              int j = 0;

            do
            {
             if (j < 8){

                printf("Esquerda\n");   
             }
                j++;

            } while (j < 8);
            

                printf("\n");
                /*Nível Aventureiro*/
                
                // Movimento do cavalo
                printf("Movimento do Cavalo:\n");

                int vertical = 2;
                int horizontal = 1;

                for (int i = 0; i < vertical; i++) 
                {
                    printf("Baixo\n");
                }

                int J = 0;

                while (J < horizontal)
                {
                    printf("Esquerda\n");
                    J++;
                }
                
                
    return 0;
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
