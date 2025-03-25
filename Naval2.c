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

    //Linha é [1, 2, 3, ...] --- Coluna é [A, B, C, ...]

    //Horizontal
    for (int j = 0; j < 3; j++) {
        tabuleiro[linhaNavio1][colunaNavio1 + j] = 3; 
    }

    //Horizontal
    for (int j = 0; j < 3; j++) {
        tabuleiro[linhaNavio2][colunaNavio2 + j] = 3; 
    }

    int linhaDiagonal1 = 0, colunaDiagonal1 = 0;
    int linhaDiagonal2 = 7, colunaDiagonal2 = 9;

    //Diagonal Principal
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaDiagonal1 + i][colunaDiagonal1 + i] = 3;
    }
    
    //Diagonal Secundário
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaDiagonal2 + i][colunaDiagonal2 - i] = 3;
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