#include <stdio.h>

void moverBispo(int casas) {  // Recursividade do Bispo
    if (casas > 0) {
        for (int i = 0; i < 1; i++) {      // Loops aninhados
            for (int j = 0; j < 1; j++) {   
        
        printf("Diagonal (cima, direita)\n");
        moverBispo(casas - 1);
        }
    }
}
}
void moverTorre(int casas) {  // Recursividade da Torre
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
void moverRainha(int casas) { // Recursividade da Rainha
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

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
        printf("Diagonal (cima, direita)\n"); // Imprime a direção do movimento
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

        printf("Movimento do Bispo\n");   // Recursividade do Bispo, move a peça 05 casas para cima e a direita.
        moverBispo(5);

        printf("\n");

        printf("Movimento da Torre\n"); // Recursividade da Torre, move a peça 05 casas para a direita.
        moverTorre(5);

        printf("\n");

        printf("Movimento da Rainha\n"); // Recursividade da Rainha, move a peça 08 casas para a esquerda.
        moverRainha(8);

        printf("\n");

        printf("Movimento do Cavalo\n");  // Movendo o Cavalo 02 casas para cima e 01 casa para direita

        for (int i = 0; i < 2; i++) { // Loop externo controlando "Cima"
        for (int j = 0; j < 1; j++) { // Loop interno apenas para demonstrar aninhamento
            printf("Cima\n");
        }
    }
    // Após os dois "Cima", imprimi "Direita" com outra combinação
    for (int x = 1, y = 0; y < 1; x++, y++) {
        printf("Direita\n");
    }   
        printf("\n");

        return 0;

    }