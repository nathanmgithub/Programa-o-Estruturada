//questao 1

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array;
    array = (int*)malloc(5 * sizeof(int));

    if (array == NULL) {
        printf("Erro de alocação de memória.");
        return -1;
    }

    printf("Digite 5 números inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &array[i]);
    }

    printf("Os números digitados foram: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    free(array);

    return 0;
}


//questao 2

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, i;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    int *vetor = (int*)malloc(tamanho * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro de alocação de memória.");
        return 1;
    }
    
    printf("Digite os valores do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
    
    printf("Valores do vetor lidos:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    
    free(vetor);
    
    return 0;
}


//questao 3

#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, i, num, pares = 0, impares = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *vetor = (int*)malloc(tamanho * sizeof(int));

    printf("Digite os valores do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n");

    free(vetor);
    return 0;
}


//questao 4

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* removeVogais(char* str) {
    int i, j = 0;
    char *novaStr = (char*)malloc(strlen(str) + 1);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' &&
            str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            novaStr[j] = str[i];
            j++;
        }
    }
    novaStr[j] = '\0';

    return novaStr;
}

int main() {
    int tamanho;
    char *string;

    printf("Digite o tamanho da string: ");
    scanf("%d", &tamanho);

    string = (char*)malloc(tamanho + 1);

    printf("Digite a string: ");
    scanf("%s", string);

    char *novaString = removeVogais(string);

    printf("String sem vogais: %s\n", novaString);

    free(string);
    free(novaString);

    return 0;
}


//questao 5

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, X, i, count = 0;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int *vetor = (int*)malloc(N * sizeof(int));

    printf("Preencha o vetor com %d valores:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite o valor de X: ");
    scanf("%d", &X);

    for (i = 0; i < N; i++) {
        if (vetor[i] % X == 0) {
            count++;
        }
    }

    printf("Existem %d múltiplos de %d no vetor.\n", count, X);

    free(vetor);
    return 0;
}


//questao 6

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *memoria;
    int tamanho, posicao, valor;
    char opcao;

    // Solicita o tamanho da memória ao usuário
    printf("Digite o tamanho da memória (em bytes, múltiplo do tamanho do tipo inteiro): ");
    scanf("%d", &tamanho);

    // Verifica se o tamanho é múltiplo do tamanho do tipo inteiro
    if (tamanho % sizeof(int) != 0) {
        printf("Erro: O tamanho da memória deve ser múltiplo do tamanho do tipo inteiro (%lu bytes).\n", sizeof(int));
        return 1;
    }

    // Aloca memória e inicializa todos os dados com zero
    memoria = (int *)calloc(tamanho / sizeof(int), sizeof(int));
    if (memoria == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Menu de opções para o usuário
    while (1) {
        printf("\nEscolha uma opção:\n");
        printf("a. Inserir um valor em uma determinada posição\n");
        printf("b. Consultar o valor contido em uma determinada posição\n");
        printf("c. Sair\n");
        printf("Opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case 'a':
                printf("Digite a posição (índice) onde deseja inserir o valor: ");
                scanf("%d", &posicao);

                if (posicao < 0 || posicao >= tamanho / sizeof(int)) {
                    printf("Erro: Posição inválida.\n");
                    break;
                }

                printf("Digite o valor a ser inserido na posição %d: ", posicao);
                scanf("%d", &valor);
                memoria[posicao] = valor;
                break;

            case 'b':
                printf("Digite a posição (índice) que deseja consultar: ");
                scanf("%d", &posicao);

                if (posicao < 0 || posicao >= tamanho / sizeof(int)) {
                    printf("Erro: Posição inválida.\n");
                    break;
                }

                printf("O valor na posição %d é: %d\n", posicao, memoria[posicao]);
                break;

            case 'c':
                free(memoria);
                printf("Programa encerrado.\n");
                return 0;

            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}


//questao 7

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int contador_zeros = 0;

    // Aloca memória para um vetor de 1500 valores do tipo int e inicializa com zeros
    vetor = (int *)calloc(1500, sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Verifica se o vetor contém realmente 1500 valores inicializados com zero
    for (int i = 0; i < 1500; i++) {
        if (vetor[i] == 0) {
            contador_zeros++;
        }
    }
    printf("O vetor contém %d valores inicializados com zero.\n", contador_zeros);

    // Atribui para cada elemento do vetor o valor do seu índice
    for (int i = 0; i < 1500; i++) {
        vetor[i] = i;
    }

    // Exibe os 10 primeiros e os 10 últimos elementos do vetor
    printf("Os 10 primeiros elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Os 10 últimos elementos do vetor:\n");
    for (int i = 1490; i < 1500; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(vetor);

    return 0;
}


//questao 8

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int num, tamanho = 0;

    while (1) {
        printf("Digite um número (digite um número negativo para parar): ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        // Redimensiona o vetor para acomodar o novo número
        tamanho++;
        vetor = (int *)realloc(vetor, tamanho * sizeof(int));
        if (vetor == NULL) {
            printf("Erro ao alocar memória.\n");
            return 1;
        }

        // Armazena o número no vetor
        vetor[tamanho - 1] = num;
    }

    // Imprime o vetor lido
    printf("Vetor lido:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(vetor);

    return 0;
}


//questao 9

#include <stdio.h>
#include <stdlib.h>

// Função que verifica se um valor está presente na matriz
int valor_na_matriz(int **matriz, int linhas, int colunas, int valor) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int **matriz;
    int linhas, colunas, valor;

    // Solicita as dimensões da matriz ao usuário
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    // Aloca memória para a matriz
    matriz = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
    }

    // Lê os valores da matriz
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Solicita o valor a ser buscado na matriz
    printf("Digite o valor a ser buscado na matriz: ");
    scanf("%d", &valor);

    // Verifica se o valor está na matriz
    if (valor_na_matriz(matriz, linhas, colunas, valor)) {
        printf("O valor %d está presente na matriz.\n", valor);
    } else {
        printf("O valor %d não está presente na matriz.\n", valor);
    }

    // Libera a memória alocada para a matriz
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}


//questao 10

#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;
    double **matriz;

    // Solicita ao usuário o número de linhas e colunas da matriz
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    // Aloca memória dinamicamente para a matriz
    matriz = (double **)malloc(linhas * sizeof(double *));
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (double *)malloc(colunas * sizeof(double));
    }

    // Lê os valores da matriz fornecidos pelo usuário
    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%lf", &matriz[i][j]);
        }
    }

    // Imprime a matriz na saída padrão com layout apropriado
    printf("\nMatriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%6.2lf ", matriz[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada para a matriz
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}


//questao 11

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int tamanho = 10;
    int quantidade = 0;
    int numero;

    // Aloca memória inicial para o vetor com tamanho 10
    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Lê os números do teclado até o usuário digitar zero
    while (1) {
        printf("Digite um número (digite 0 para encerrar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        // Verifica se o vetor está cheio
        if (quantidade == tamanho) {
            int novo_tamanho = tamanho + 10;
            int *novo_vetor = (int *)malloc(novo_tamanho * sizeof(int));
            if (novo_vetor == NULL) {
                printf("Erro ao alocar memória.\n");
                free(vetor);
                return 1;
            }

            // Copia os valores do vetor antigo para o novo vetor
            for (int i = 0; i < quantidade; i++) {
                novo_vetor[i] = vetor[i];
            }

            // Libera a memória do vetor antigo
            free(vetor);

            // Atualiza o vetor e o tamanho
            vetor = novo_vetor;
            tamanho = novo_tamanho;
        }

        // Armazena o número no vetor
        vetor[quantidade] = numero;
        quantidade++;
    }

    // Imprime o vetor lido
    printf("Vetor lido:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a memória alocada para o vetor
    free(vetor);

    return 0;
}
