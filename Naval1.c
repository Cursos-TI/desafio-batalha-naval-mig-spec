#include <stdio.h>

int main(){
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    int linhaNavio1 = 6, linhaNavio2 = 2; 
    int colunaNavio1 = 4, colunaNavio2 = 5;
    int orientacao1 = 1, orientacao2 = 0;
    //Linha é [1, 2, 3, ...] --- Coluna é [A, B, C, ...]

    if (orientacao1 == 0) { // Horizontal
        for (int j = 0; j < 3; j++) {
            tabuleiro[linhaNavio1][colunaNavio1 + j] = 3; 
        }
    } else if (orientacao1 == 1) { // Vertical
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaNavio1 + i][colunaNavio1] = 3;
        }
    }

    if (orientacao2 == 0) { // Horizontal
        for (int j = 0; j < 3; j++) {
            tabuleiro[linhaNavio2][colunaNavio2 + j] = 3; 
        }
    } else if (orientacao2 == 1) { // Vertical
        for (int i = 0; i < 3; i++) {
            tabuleiro[linhaNavio2 + i][colunaNavio2] = 3;
        }
    }

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

    printf("\n");
    
    return 0;
}