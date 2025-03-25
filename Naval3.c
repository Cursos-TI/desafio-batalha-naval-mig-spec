#include <stdio.h>

void posicionamento(int tabuleiro[10][10], int linha, int coluna, int valor, int orientacao) {
    if (orientacao == 0) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha][coluna + i] = valor;
        } // Horizontal = 0
    } else if (orientacao == 1) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha + i][coluna] = valor;
        } // Vertical = 1
    } else if (orientacao == 2) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha + i][coluna + i] = valor;
        } // Diagonal Principal = 2
    } else if (orientacao == 3) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha + i][coluna - i] = valor;
        } // Diagonal Secundária = 3
    }
}

int main(){
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    //tabuleiro, linha, coluna, valor, orientacao (0 = Horizontal, 1 = Vertical)
    //Linha é [1, 2, 3, ...] --- Coluna é [A, B, C, ...]
    posicionamento(tabuleiro, 0, 7, 5, 1); // Habilidade em Octaedro: Vertical
    posicionamento(tabuleiro, 1, 6, 5, 0); // Habilidade em Octaedro: Horizontal

    posicionamento(tabuleiro, 5, 3, 5, 1); // Habilidade em Cruz: Vertical
    posicionamento(tabuleiro, 6, 1, 5, 0); // Habilidade em Cruz: Horizontal 1
    posicionamento(tabuleiro, 6, 3, 5, 0); // Habilidade em Cruz: Horizontal 2

    posicionamento(tabuleiro, 1, 2, 5, 1); // Habilidade em Cone: Vertical
    posicionamento(tabuleiro, 2, 1, 5, 0); // Habilidade em Cone: Horizontal 1
    posicionamento(tabuleiro, 3, 0, 5, 0); // Habilidade em Cone: Horizontal 2
    posicionamento(tabuleiro, 3, 2, 5, 0); // Habilidade em Cone: Horizontal 3

    posicionamento(tabuleiro, 4, 9, 3, 1); // Navio 1: Vertical
    posicionamento(tabuleiro, 3, 5, 3, 0); // Navio 2: Horizontal
    posicionamento(tabuleiro, 6, 0, 3, 2); // Navio 3: Diagonal Principal
    posicionamento(tabuleiro, 0, 2, 3, 3); // Navio 4: Diagonal Secundária

    printf("\nTABULEIRO DE BATALHA NAVAL\n");
    printf("   ");
    for (int i = 0; i < 10; i++) {
        printf(" %c ", linha[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}