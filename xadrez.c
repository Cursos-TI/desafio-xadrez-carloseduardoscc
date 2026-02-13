#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Declarando variáveis contendo a quantidade de movimentos das peças a ser executados
    int towerMoves = 5;
    int bishopMoves = 5;
    int queenMoves = 8;
    int horseMoves = 1;

    // Implementação movimentação do bispo na diagonal para cima e à direita
    printf("--- BISHOP MOVEMENT ---\n");
    for(int i = 1; i <= bishopMoves; i++){
        printf("cima\n");
        printf("direita\n");
    }

    // Implementação movimentaçao da Torre à direita
    printf("\n--- TOWER MOVEMENT ---\n");
    for(int i = 1; i <= towerMoves; i++){
        printf("Direita\n");
    }

    // Implementação de Movimentação da Rainha à esquerda
    printf("\n--- QUEEN MOVEMENT ---\n");
    for(int i = 1; i <= queenMoves; i++){
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Implementaçao da movimentaçao do cavalo para baixo e à esquerda
    printf("\n--- HORSE MOVEMENT ---\n");
    while(horseMoves > 0){
        printf("Baixo\n");
        printf("Baixo\n");
        printf("Esquerda\n");
        horseMoves--;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
