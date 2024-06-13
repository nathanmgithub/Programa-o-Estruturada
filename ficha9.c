//questao 1

#include <stdio.h>

int main() {
    int vetor[10];
    int i, maior;

    printf("Digite os 10 elementos do vetor:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("O maior elemento do vetor é: %d\n", maior);

    return 0;
}


//questao 2

#include <stdio.h>

int main() {
    int vetor[10];
    int i, menor;

    printf("Digite os 10 elementos do vetor:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];

    for (i = 1; i < 10; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("O menor elemento do vetor é: %d\n", menor);

    return 0;
}


//questao 3

#include <stdio.h>

int main() {
    int numeros[10];
    int maior = 0;
    int posicao = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %do número: ", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] > maior) {
            maior = numeros[i];
            posicao = i;
        }
    }

    printf("O maior elemento é %d e está na posição %d do vetor.\n", maior, posicao);

    return 0;
}


//questao 4

#include <stdio.h>

int main() {
    int valores[5];
    int i, maior, menor;

    // Lendo os valores
    for(i = 0; i < 5; i++) {
        printf("Digite o %do valor: ", i+1);
        scanf("%d", &valores[i]);
    }

    // Inicializando maior e menor com o primeiro elemento do array
    maior = menor = valores[0];

    // Encontrando o maior e o menor valor
    for(i = 1; i < 5; i++) {
        if(valores[i] > maior) {
            maior = valores[i];
        }
        if(valores[i] < menor) {
            menor = valores[i];
        }
    }

    // Imprimindo as posições do maior e menor valor
    for(i = 0; i < 5; i++) {
        if(valores[i] == maior) {
            printf("O maior valor %d está na posição %d\n", maior, i);
        }
        if(valores[i] == menor) {
            printf("O menor valor %d está na posição %d\n", menor, i);
        }
    }

    return 0;
}


//questao 5 

#include <stdio.h>

int main() {
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1}; // Exemplo de vetor com valores repetidos
    int i, j;

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("Valores iguais encontrados: %d\n", vetor[i]);
            }
        }
    }

    return 0;
}


