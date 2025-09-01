#include <stdio.h>

int main() {
    
    int i = 0;
    int j = 0;

    printf("Desafio de Xadrez - MateCheck\n");
    printf("\n");

    // Nível Novato - Movimentação das Peças
    
    // Implementação de Movimentação do Bispo com Do-While
    printf("Movimento do Bispo\n");
    // Movendo o Bispo 05 casas na diagonal para direita
       
       do {
        printf("Cima e Direita\n"); // Imprime a direção do movimento
        i++;
        } while (i < 5);

        printf("\n");    
    // Implementação de Movimentação da Torre com While
    printf("Movimento da Torre\n");
    // Movendo a Torre 05 casas para direita
        
       while (j < 5) {
        printf("Direita\n"); // Imprime a direção do movimento
        j++;
    }
        printf("\n");    

    // Implementação de Movimentação da Rainha com For
    printf("Movimento da Rainha\n");
    // Movendo a Rainha 08 casas para esquerda
    for(int i = 0; i < 8; i++){
        printf("Esquerda\n"); // Imprime a direção do movimento
    }
    printf("\n");   

    // Nível Aventureiro - Movimentação do Cavalo
    printf("Movimento do Cavalo\n");
    // Movendo o Cavalo 02 casas para baixo e 01 casa para esquerda

        int movimento = 1; // Controla todo o movimento em L

        while (movimento--){
            for (int i = 0; i < 2; i++) {
                printf("Baixo\n"); // Imprime a linha vertical
            }
            printf("Esquerda\n"); // Imprime a linha horizontal
        }
        printf("\n");   

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}