//questao 1

#include <stdio.h>

int main() {
    int notas[5];
    int i, aprovados = 0;

    for (i = 0; i < 5; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%d", &notas[i]);

        if (notas[i] >= 7) {
            aprovados++;
        }
    }

    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}


//questao 2

#include <stdio.h>

int main() {
    int numero, soma = 0, digito;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while(numero != 0) {
        digito = numero % 10;
        soma += digito;
        numero /= 10;
    }

    printf("A soma dos dígitos do número é: %d", soma);

    return 0;
}


//questao 3

#include <stdio.h>

int main() {
    int numero, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("Os divisores de %d são:\n", numero);
    
    for (i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}


//questao 4

#include <stdio.h>

int main() {
    float altura, soma = 0, media;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite a altura da pessoa %d: ", i + 1);
        scanf("%f", &altura);
        soma += altura;
    }

    media = soma / 5;
    printf("A média de altura das 5 pessoas é: %.2f\n", media);

    return 0;
}


//questao 5

#include <stdio.h>

int main() {
    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz ");
        } else if (i % 3 == 0) {
            printf("Fizz ");
        } else if (i % 5 == 0) {
            printf("Buzz ");
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}


//questao 6

#include <stdio.h>

int main() {
    int numero, digito, soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero > 0) {
        digito = numero % 10;
        if (digito % 2 == 0) {
            soma += digito;
        }
        numero /= 10;
    }

    printf("A soma dos dígitos pares é: %d\n", soma);

    return 0;
}


//questao 7

#include <stdio.h>

int main() {
    int numero, invertido = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero != 0) {
        invertido = invertido * 10 + numero % 10;
        numero = numero / 10;
    }

    printf("Número invertido: %d", invertido);

    return 0;
}


//questao 8

#include <stdio.h>

int main() {
    int numero = 1;
    int soma = 0;

    while(numero <= 100) {
        soma += numero;
        numero++;
    }

    printf("A soma dos números de 1 a 100 é: %d\n", soma);

    return 0;
}


//questao 9

#include <stdio.h>

int main() {
    int numero = 1;
    int soma = 0;

    while(numero <= 100) {
        soma += numero;
        numero++;
    }

    printf("A soma dos números de 1 a 100 é: %d\n", soma);

    return 0;
}


//questao 10

#include <stdio.h>

int main() {
    int i = 1;
    
    while (i <= 10) {
        printf("9 x %d = %d\n", i, 9 * i);
        i++;
    }
    
    return 0;
}


//questao 11

#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite um número inteiro (0 para sair): ");
    scanf("%d", &numero);

    maior = menor = numero;

    while(numero != 0) {
        if(numero > maior) {
            maior = numero;
        }
        if(numero < menor) {
            menor = numero;
        }

        printf("Digite um número inteiro (0 para sair): ");
        scanf("%d", &numero);
    }

    printf("O maior número digitado foi: %d\n", maior);
    printf("O menor número digitado foi: %d\n");

    return 0;
}


//questao 12

#include <stdio.h>

int main() {
    int numero, digito, soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while(numero != 0) {
        digito = numero % 10;
        soma += digito * digito * digito;
        numero /= 10;
    }

    printf("A soma dos dígitos elevados ao cubo é: %d", soma);

    return 0;
}


//questao 13

#include <stdio.h>

int main() {
    int numero, digito, soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while(numero != 0) {
        digito = numero % 10;
        soma += digito * digito * digito;
        numero /= 10;
    }

    printf("A soma dos dígitos elevados ao cubo é: %d", soma);

    return 0;
}


//questao 14

#include <stdio.h>

int main() {
    int num = 1;

    printf("Números ímpares de 1 a 100:\n");

    while (num <= 100) {
        printf("%d\n", num);
        num += 2; // Incremento para pular os números pares
    }

    return 0;
}


//questao 15

#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 50) {
        if (i % 3 == 0) {
            printf("%d é múltiplo de 3\n", i);
        }
        i++;
    }

    return 0;
}


//questao 16

#include <stdio.h>

int main() {
    int contador = 0;
    int notas, aprovados = 0;

    while (contador < 5) {
        printf("Digite a nota do aluno %d: ", contador + 1);
        scanf("%d", &notas);

        if (notas >= 7) {
            aprovados++;
        }

        contador++;
    }

    printf("Total de alunos aprovados: %d\n", aprovados);

    return 0;
}


//questao 17

#include <stdio.h>

int main() {
    int numero, pares = 0;
    
    printf("Digite uma sequência de números inteiros (0 para sair):\n");
    
    while (1) {
        scanf("%d", &numero);
        
        if (numero == 0) {
            break;
        }
        
        if (numero % 2 == 0) {
            pares++;
        } else {
            break;
        }
    }
    
    printf("Quantidade de números pares antes do primeiro ímpar: %d\n", pares);
    
    return 0;
}


//questao 18

#include <stdio.h>

int main() {
    int numero, pares = 0, impares = 0;

    printf("Digite uma sequência de números inteiros (0 para sair):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}


//questao 19

#include <stdio.h>

int main() {
    int num, div2 = 0, div3 = 0, div5 = 0;

    printf("Digite uma sequência de números inteiros (0 para sair):\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num % 2 == 0) {
            div2++;
        }
        if (num % 3 == 0) {
            div3++;
        }
        if (num % 5 == 0) {
            div5++;
        }
    }

    printf("Quantidade de números divisíveis por 2: %d\n", div2);
    printf("Quantidade de números divisíveis por 3: %d\n", div3);
    printf("Quantidade de números divisíveis por 5: %d\n", div5);

    return 0;
}


//questao 20

#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;

    printf("Digite uma sequência de números inteiros (0 para sair):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 3 == 0) {
            soma += numero;
            quantidade++;
        }
    }

    if (quantidade > 0) {
        float media = (float)soma / quantidade;
        printf("A média dos números divisíveis por 3 é: %.2f\n", media);
    } else {
        printf("Nenhum número divisível por 3 foi digitado.\n");
    }

    return 0;
}


//questao 21

#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Digite uma sequência de números inteiros (0 para sair):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 999) {
            contador++;
        }
    }

    printf("Quantidade de números com mais de três dígitos: %d\n", contador);

    return 0;
}


//questao 22

#include <stdio.h>

int main() {
    int numero, soma = 0, quantidade = 0;

    printf("Digite uma sequência de números inteiros (digite 0 para sair):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero >= 50 && numero <= 100) {
            soma += numero;
            quantidade++;
        }
    }

    if (quantidade > 0) {
        float media = (float)soma / quantidade;
        printf("A média dos números entre 50 e 100 é: %.2f\n", media);
    } else {
        printf("Nenhum número entre 50 e 100 foi inserido.\n");
    }

    return 0;
}


//questao 23

#include <stdio.h>

int main() {
    int numero, menor_impar_positivo = -1;

    while (1) {
        printf("Digite um número inteiro (0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero > 0 && numero % 2 != 0) {
            if (menor_impar_positivo == -1 || numero < menor_impar_positivo) {
                menor_impar_positivo = numero;
            }
        }
    }

    if (menor_impar_positivo != -1) {
        printf("O menor número ímpar positivo digitado foi: %d\n", menor_impar_positivo);
    } else {
        printf("Nenhum número ímpar positivo foi digitado.\n");
    }

    return 0;
}


//questao 24

#include <stdio.h>

int main() {
    int numero, pares = 0, impares = 0;

    printf("Digite uma sequência de números inteiros (0 para sair):\n");

    while (1) {
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        if (numero % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    return 0;
}
