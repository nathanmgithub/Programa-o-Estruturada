//questao 1 

#include <stdio.h>

int somatorioRecursivo(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + somatorioRecursivo(n - 1);
    }
}

int main() {
    int numero = 5; // Exemplo com N = 5
    int resultado = somatorioRecursivo(numero);
    printf("O somatório de 1 até %d é: %d\n", numero, resultado);
    return 0;
}


//questao 2

#include <stdio.h>

int calcularFatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * calcularFatorial(n - 1);
    }
}

int main() {
    int numero = 5; // Número para calcular o fatorial
    int resultado = calcularFatorial(numero);
    printf("O fatorial de %d é: %d", numero, resultado);
    return 0;
}


//questao 3 

#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 10; // Exemplo: calcular o 10º termo
    printf("O %dº termo da sequência de Fibonacci é: %d", n, fibonacci(n));
    return 0;
}


//questao 4

#include <stdio.h>

void imprimirNumerosNaturais(int n) {
    if (n > 0) {
        imprimirNumerosNaturais(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
    } else {
        imprimirNumerosNaturais(numero);
    }

    return 0;
}


//questao 5 

#include <stdio.h>

void imprimirDecrescente(int n) {
    if (n >= 0) {
        printf("%d ", n);
        imprimirDecrescente(n - 1);
    }
}

int main() {
    int numero;
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    printf("Números naturais em ordem decrescente até %d:\n", numero);
    imprimirDecrescente(numero);
    
    return 0;
}
