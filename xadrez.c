#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int casas) {
    // Caso base: para quando não houver mais casas a percorrer
    if (casas <= 0) {
        return;
    }

    printf("Direita\n");

    // Chamada recursiva reduzindo uma casa
    moverTorre(casas - 1);
}
void moverRainha(int casas) {
    if (casas <= 0) {
        return;
    }

    printf("Esquerda\n");

    moverRainha(casas - 1);
}

void moverBispo(int casas) {
    if (casas <= 0) {
        return;
    }

    /*
        Loop externo → movimento vertical (Cima)
        Loop interno → movimento horizontal (Direita)

        Cada chamada recursiva representa uma casa na diagonal.
    */

    for (int vertical = 0; vertical < 1; vertical++) {
        printf("Cima\n");

        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

void moverCavalo(int movimentos) {

    /*
        Movimento em "L":
        2 casas para cima
        1 casa para a direita

        Uso de loops aninhados com controle de fluxo.
    */

    for (int m = 0; m < movimentos; m++) {

        for (int vertical = 1; vertical <= 2; vertical++) {

            // Se por algum motivo passar de 2, interrompe
            if (vertical > 2) {
                break;
            }

            printf("Cima\n");
        }

        for (int horizontal = 1; horizontal <= 2; horizontal++) {

            // Só queremos 1 movimento horizontal
            if (horizontal == 2) {
                continue;  // ignora segunda iteração
            }

            printf("Direita\n");
        }
    }
}

int main() {

    // Valores definidos diretamente no código (conforme requisito)
    int towerMoves = 5;
    int bishopMoves = 5;
    int queenMoves = 8;
    int horseMoves = 1;

    printf("--- BISHOP MOVEMENT ---\n");
    moverBispo(bishopMoves);

    printf("\n--- TOWER MOVEMENT ---\n");
    moverTorre(towerMoves);

    printf("\n--- QUEEN MOVEMENT ---\n");
    moverRainha(queenMoves);

    printf("\n--- HORSE MOVEMENT ---\n");
    moverCavalo(horseMoves);

    return 0;
}
