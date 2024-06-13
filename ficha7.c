//questao 1

#include <stdio.h>

int main() {
    char c = 'a';
    char *pc = &c;

    printf("Endereço de c: %p\n", (void *)&c);
    printf("Valor de c: %c\n", *pc);
    printf("Endereço de pc: %p\n", (void *)&pc);

    return 0;
}


//questao 2

#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *ptr_inteiro = &inteiro;
    float *ptr_real = &real;
    char *ptr_char = &caractere;

    printf("Valores iniciais:\n");
    printf("Inteiro: %d\nReal: %.2f\nChar: %c\n", inteiro, real, caractere);

    *ptr_inteiro = 20;
    *ptr_real = 6.28;
    *ptr_char = 'B';

    printf("\nValores após modificação:\n");
    printf("Inteiro: %d\nReal: %.2f\nChar: %c\n", inteiro, real, caractere);

    return 0;
}


//questao 3

#include <stdio.h>

int main() {
    int var1, var2;

    printf("Digite o valor da primeira variável: ");
    scanf("%d", &var1);

    printf("Digite o valor da segunda variável: ");
    scanf("%d", &var2);

    printf("Endereço de memória da primeira variável: %p\n", (void*)&var1);
    printf("Endereço de memória da segunda variável: %p\n", (void*)&var2);

    return 0;
}


//questao 4

#include <stdio.h>

void trocarValores(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;
    
    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    
    printf("Valores antes da troca: A = %d, B = %d\n", A, B);
    
    trocarValores(&A, &B);
    
    printf("Valores depois da troca: A = %d, B = %d\n", A, B);
    
    return 0;
}


//questao 5

#include <stdio.h>

int somaDobro(int *a, int *b) {
    *a = 2 * (*a); // Armazena o dobro de A em A
    *b = 2 * (*b); // Armazena o dobro de B em B
    return *a + *b; // Retorna a soma dos dobros
}

int main() {
    int num1, num2;
    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    int resultado = somaDobro(&num1, &num2);
    printf("A soma do dobro dos números é: %d", resultado);

    return 0;
}


