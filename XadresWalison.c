/*Walison Gouvêa de Almeida */

#include <stdio.h>

/* Nível Novato */
void movimento_torre_for() {
    printf("Movimento da Torre (for - 5 casas para direita):\n");
    for(int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
}

void movimento_bispo_while() {
    printf("\nMovimento do Bispo (while - 5 casas na diagonal superior direita):\n");
    int casas = 0;
    while(casas < 5) {
        printf("Cima, Direita\n");
        casas++;
    }
}

void movimento_rainha_do_while() {
    printf("\nMovimento da Rainha (do-while - 8 casas para esquerda):\n");
    int casas = 0;
    do {
        printf("Esquerda\n");
        casas++;
    } while(casas < 8);
}

/* Nível Aventureiro */
void movimento_cavalo_loops_aninhados() {
    printf("\nMovimento do Cavalo (loops aninhados - 2 baixo, 1 esquerda):\n");
    
    // Loop for para o movimento vertical (2 casas)
    for(int vertical = 0; vertical < 2; vertical++) {
        printf("Baixo\n");
    }
    
    // Loop while para o movimento horizontal (1 casa)
    int horizontal = 0;
    while(horizontal < 1) {
        printf("Esquerda\n");
        horizontal++;
    }
}

/* Nível Mestre - Funções Recursivas */
void movimento_torre_recursivo(int casas) {
    if(casas <= 0) return;
    printf("Direita\n");
    movimento_torre_recursivo(casas - 1);
}

void movimento_bispo_recursivo(int casas) {
    if(casas <= 0) return;
    printf("Cima, Direita\n");
    movimento_bispo_recursivo(casas - 1);
}

void movimento_rainha_recursivo(int casas) {
    if(casas <= 0) return;
    printf("Esquerda\n");
    movimento_rainha_recursivo(casas - 1);
}

/* Nível Mestre - Bispo com loops aninhados */
void movimento_bispo_loops_aninhados() {
    printf("\nBispo com loops aninhados (5 casas diagonal):\n");
    for(int vertical = 0; vertical < 5; vertical++) {
        for(int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
}

/* Nível Mestre - Cavalo com loops complexos */
void movimento_cavalo_loops_complexos() {
    printf("\nCavalo com loops complexos (2 cima, 1 direita):\n");
    int passos = 0;
    
    for(int i = 0; i < 3; i++) {
        if(i < 2) {
            printf("Cima\n");
            continue;
        }
        
        while(passos < 1) {
            printf("Direita\n");
            passos++;
            break;
        }
    }
}

int main() {
    /* Nível Novato */
    movimento_torre_for();
    movimento_bispo_while();
    movimento_rainha_do_while();
    
    /* Nível Aventureiro */
    movimento_cavalo_loops_aninhados();
    
    /* Nível Mestre */
    printf("\n=== NÍVEL MESTRE ===\n");
    printf("\nTorre recursiva (5 casas direita):\n");
    movimento_torre_recursivo(5);
    
    printf("\nBispo recursivo (5 casas diagonal):\n");
    movimento_bispo_recursivo(5);
    
    printf("\nRainha recursiva (8 casas esquerda):\n");
    movimento_rainha_recursivo(8);
    
    movimento_bispo_loops_aninhados();
    movimento_cavalo_loops_complexos();
    
    return 0;
}
