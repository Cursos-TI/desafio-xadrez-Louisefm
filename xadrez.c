#include <stdio.h>

int main(){
    // Nível Novato - Movimentação das Peças

    printf("Desafio de Xadrez - MateCheck\n");
    printf("\n");

    // Implementação de Movimentação do Bispo com Do-While
    printf("Movimento do Bispo\n");
       int i = 0;

       do {
        printf("Cima e Direita\n"); 
        i++;
        } while (i < 5);

        printf("\n");    
    // Implementação de Movimentação da Torre com While
    printf("Movimento da Torre\n");
        int i = 0;

       while (i < 5) {
        printf("Direita\n");
        i++;
    }
        printf("\n");    

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.




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