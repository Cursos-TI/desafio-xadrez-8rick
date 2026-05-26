#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
     int bispo = 5;
     int torre = 5;
     int rainha = 8;



    // =====================================
    // BISPO
    // =====================================    
     printf("=== Movimento do bispo ===");
     
     //diagonal = cima direita
     for (int i = 1; i <= bispo; i++) {
        printf("Cima direita");
     }

    // =====================================
    // TORRE
    // =====================================
    printf("\n=== Movimento da torre ===\n");
    

    //direita
    for(int i = 1; i <= torre; i++) {
        printf("Direita\n");
    }
     
    // =====================================
    // RAINHA
    // =====================================
    printf("Movimento da Rainha");

    //esquerda 
    for(int i = 1; i <= rainha; i++) {
        printf("Esquerda");
    }

    // =====================================
    // CAVALO
    // =====================================

    /*
        Movimento em L:
        2 casas para cima
        1 casa para direita
    */

    for(int i = 1; i <= 2; i++) {
        printf("Cima\n");
    }

    for(int i = 1; i <= 1; i++) {
        printf("Direita\n");
    }


    return 0; 
}
