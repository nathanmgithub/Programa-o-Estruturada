//questao 1

#include <stdio.h>

int main() {
    int matriz[4][4] = {{12, 5, 8, 15},
                         {9, 11, 7, 20},
                         {6, 14, 3, 10},
                         {17, 4, 13, 2}};
    int contador = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > 10) {
                contador++;
            }
        }
    }

    printf("A matriz possui %d valores maiores que 10.\n", contador);

    return 0;
}


//questao 2

#include <stdio.h>

int main() {
    int matriz[5][5];
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }
    
    // Exibindo a matriz resultante
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}


//questao 3

#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matriz[LINHAS][COLUNAS];

    // Preencher a matriz com o produto da linha e coluna
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }

    // Imprimir a matriz na tela
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//questao 4

#include <stdio.h>

int main() {
    int matriz[4][4] = {{1, 2, 3, 4},
                         {5, 6, 7, 8},
                         {9, 10, 11, 12},
                         {13, 14, 15, 16}};
    
    int maior = matriz[0][0];
    int linha_maior = 0;
    int coluna_maior = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }

    printf("O maior valor na matriz é: %d\n", maior);
    printf("Localizado na linha: %d e coluna: %d\n", linha_maior, coluna_maior);

    return 0;
}


