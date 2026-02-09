#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Nível Mestre - Funções Recursivas
void movimentoBispoRecursivo(int posicao, int limite) {
    if (posicao > limite) {
        return;
    }
    printf("Bispo em diagonal: (%d, %d)\n", posicao, posicao);
    movimentoBispoRecursivo(posicao + 1, limite);
}

void movimentoTorreRecursivo(int posicao, int limite) {
    if (posicao > limite) {
        return;
    }
    printf("Torre para a direita: (%d, 0)\n", posicao);
    movimentoTorreRecursivo(posicao + 1, limite);
}

void movimentoRainhaRecursivo(int posicao, int limite) {
    if (posicao <= 0) {
        return;
    }
    printf("Rainha para a esquerda: (%d, 0)\n", posicao);
    movimentoRainhaRecursivo(posicao - 1, 0);
}

int main() {
    // Constantes de velocidade
    const int VELOCIDADE_BISPO = 5;
    const int VELOCIDADE_TORRE = 5;
    const int VELOCIDADE_RAINHA = 8;
    const int VELOCIDADE_CAVALO = 2;

    printf("========== NÍVEL NOVATO - Movimentação das Peças ==========\n\n");

    // Implementação de Movimentação do Bispo
    printf("BISPO - Movimento em diagonal:\n");
    for (int i = 1; i <= VELOCIDADE_BISPO; i++) {
        printf("Bispo em diagonal: (%d, %d)\n", i, i);
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    printf("TORRE - Movimento para a direita:\n");
    for (int i = 1; i <= VELOCIDADE_TORRE; i++) {
        printf("Torre para a direita: (%d, 0)\n", i);
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    printf("RAINHA - Movimento para a esquerda:\n");
    for (int i = VELOCIDADE_RAINHA; i >= 1; i--) {
        printf("Rainha para a esquerda: (%d, 0)\n", i);
    }
    printf("\n");

    printf("========== NÍVEL AVENTUREIRO - Cavalo em L ==========\n\n");

    // Nível Aventureiro - Movimentação do Cavalo com loops aninhados
    printf("CAVALO - Movimento em L:\n");
    for (int i = 1; i <= VELOCIDADE_CAVALO; i++) {
        for (int j = 1; j <= VELOCIDADE_CAVALO; j++) {
            if (i == 1 && j == 2) {
                printf("Cavalo em L: (%d, %d)\n", i, j);
            } else if (i == 2 && j == 1) {
                printf("Cavalo em L: (%d, %d)\n", i, j);
            }
        }
    }
    printf("\n");

    printf("========== NÍVEL MESTRE - Funções Recursivas e Loops Avançados ==========\n\n");

    // Bispo com recursão
    printf("BISPO RECURSIVO:\n");
    movimentoBispoRecursivo(1, VELOCIDADE_BISPO);
    printf("\n");

    // Torre com recursão
    printf("TORRE RECURSIVA:\n");
    movimentoTorreRecursivo(1, VELOCIDADE_TORRE);
    printf("\n");

    // Rainha com recursão
    printf("RAINHA RECURSIVA:\n");
    movimentoRainhaRecursivo(VELOCIDADE_RAINHA, 0);
    printf("\n");

    // Cavalo com loops avançados (continue e break)
    printf("CAVALO - Loops Com Continue e Break:\n");
    for (int horizontal = 1; horizontal <= 5; horizontal++) {
        for (int vertical = 1; vertical <= 5; vertical++) {
            if (horizontal == 2 && vertical == 3) {
                printf("Cavalo: (%d, %d) - Movimento válido\n", horizontal, vertical);
                continue;
            }
            if (horizontal == 4 && vertical == 4) {
                printf("Cavalo: Limite do tabuleiro atingido\n");
                break;
            }
        }
    }

    return 0;
}
