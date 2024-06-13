//questao 3 
#include <stdio.h>

int main() {
    int num;

    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    
    if (num > 0) {
        printf("O número %d é positivo.\n", num);
    } else if (num < 0) {
        printf("O número %d é negativo.\n", num);
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}

//questao 4

#include <stdio.h>

int main() {
    int idade;

    // Solicita ao usuário que insira a idade
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Verifica se a pessoa é maior ou menor de idade
    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else {
        printf("Você é menor de idade.\n");
    }

    return 0;
}


//questao 5

#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("O primeiro número (%d) é maior que o segundo número (%d).\n", num1, num2);
    } else if (num2 > num1) {
        printf("O segundo número (%d) é maior que o primeiro número (%d).\n", num2, num1);
    } else {
        printf("Os dois números são iguais.\n");
    }

    return 0;
}


//questao 6

#include <stdio.h>

int main() {
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("O número %d é par.\n", num);
    } else {
        printf("O número %d é ímpar.\n", num);
    }

    return 0;
}


//questao 7 

#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 7) {
        printf("Aluno aprovado com média %.2f.\n", media);
    } else {
        printf("Aluno reprovado com média %.2f.\n", media);
    }

    return 0;
}


//questao 8 

#include <stdio.h>
#include <string.h>

int main() {
    char nome1[100], nome2[100];

    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);

    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

    int len1 = strlen(nome1);
    int len2 = strlen(nome2);

    if (len1 > len2) {
        printf("O nome '%s' possui mais caracteres (%d) do que o nome '%s' (%d).\n", nome1, len1, nome2, len2);
    } else if (len2 > len1) {
        printf("O nome '%s' possui mais caracteres (%d) do que o nome '%s' (%d).\n", nome2, len2, nome1, len1);
    } else {
        printf("Os dois nomes possuem o mesmo número de caracteres (%d).\n", len1);
    }

    return 0;
}


//questao 9

#include <stdio.h>

int main() {
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' ||
        caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
        printf("O caractere '%c' é uma vogal.\n", caractere);
    } else {
        printf("O caractere '%c' é uma consoante.\n", caractere);
    }

    return 0;
}


//questao 10

#include <stdio.h>

int main() {
    int num1, num2, num3, temp;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);


    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    if (num1 > num3) {
        temp = num1;
        num1 = num3;
        num3 = temp;
    }

    if (num2 > num3) {
        temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("Os números em ordem crescente são: %d, %d, %d\n", num1, num2, num3);

    return 0;
}

//questao 11

#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Você está abaixo do peso.\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Você está com peso normal.\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Você está com sobrepeso.\n");
    } else if (imc >= 30 && imc < 34.9) {
        printf("Você está obeso.\n");
    } else {
        printf("Você está muito obeso.\n");
    }

    return 0;
}


//questao 12

#include <stdio.h>

int main() {
    int numero_mes;

    printf("Digite o número do mês (1 a 12): ");
    scanf("%d", &numero_mes);

    switch(numero_mes) {
        case 1:
            printf("Janeiro\n");
            break;
        case 2:
            printf("Fevereiro\n");
            break;
        case 3:
            printf("Março\n");
            break;
        case 4:
            printf("Abril\n");
            break;
        case 5:
            printf("Maio\n");
            break;
        case 6:
            printf("Junho\n");
            break;
        case 7:
            printf("Julho\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Setembro\n");
            break;
        case 10:
            printf("Outubro\n");
            break;
        case 11:
            printf("Novembro\n");
            break;
        case 12:
            printf("Dezembro\n");
            break;
        default:
            printf("Mês inválido\n");
    }

    return 0;
}


//questao 13

#include <stdio.h>

int main() {
    float salario, novoSalario;
    
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);
    
    if (salario > 1500) {
        novoSalario = salario * 1.10;
    } else {
        novoSalario = salario * 1.15;
    }
    
    printf("O novo salário do funcionário é: R$ %.2f", novoSalario);
    
    return 0;
}


//questao 14

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 3 == 0 && numero % 5 == 0) {
        printf("%d é divisível por 3 e por 5 ao mesmo tempo.\n", numero);
    } else {
        printf("%d não é divisível por 3 e por 5 ao mesmo tempo.\n", numero);
    }

    return 0;
}


//questao 15

#include <stdio.h>
#include <string.h>

int main() {
    char diaSemana[20];

    printf("Insira o dia da semana por extenso: ");
    scanf("%s", diaSemana);

    if (strcmp(diaSemana, "segunda") == 0 || strcmp(diaSemana, "terça") == 0 || strcmp(diaSemana, "quarta") == 0 || strcmp(diaSemana, "quinta") == 0 || strcmp(diaSemana, "sexta") == 0) {
        printf("Dia útil.\n");
    } else if (strcmp(diaSemana, "sábado") == 0 || strcmp(diaSemana, "domingo") == 0) {
        printf("Fim de semana.\n");
    } else {
        printf("Dia inválido.\n");
    }

    return 0;
}


//questao 16

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número de 1 a 5: ");
    scanf("%d", &numero);

    switch(numero) {
        case 5:
            printf("Muito bom");
            break;
        case 4:
            printf("Bom");
            break;
        case 3:
            printf("Regular");
            break;
        case 2:
            printf("Insuficiente");
            break;
        case 1:
            printf("Muito insuficiente");
            break;
        default:
            printf("Número fora do intervalo permitido.");
    }

    return 0;
}


//questao 17

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um número entre 1 e 7: ");
    scanf("%d", &numero);

    switch(numero) {
        case 1:
            printf("Domingo\n");
            break;
        case 2:
            printf("Segunda-feira\n");
            break;
        case 3:
            printf("Terça-feira\n");
            break;
        case 4:
            printf("Quarta-feira\n");
            break;
        case 5:
            printf("Quinta-feira\n");
            break;
        case 6:
            printf("Sexta-feira\n");
            break;
        case 7:
            printf("Sábado\n");
            break;
        default:
            printf("Número inválido. Insira um número entre 1 e 7.\n");
    }

    return 0;
}


//questao 18

#include <stdio.h>
#include <math.h>

int main() {
    double numero;
    
    printf("Digite um número decimal: ");
    if (scanf("%lf", &numero) != 1) {
        printf("Entrada inválida. Certifique-se de inserir um número decimal.\n");
        return 1;
    }

    int arredondado = round(numero);
    printf("O número %lf arredondado é: %d\n", numero, arredondado);

    return 0;
}


//questao 19

#include <stdio.h>

int main() {
    int idade;

    printf("Por favor, insira a sua idade: ");
    scanf("%d", &idade);

    if (idade >= 0 && idade <= 1) {
        printf("Você é um bebê.\n");
    } else if (idade > 1 && idade <= 12) {
        printf("Você é uma criança.\n");
    } else if (idade > 12 && idade <= 18) {
        printf("Você é um adolescente.\n");
    } else {
        printf("Você é um adulto.\n");
    }

    return 0;
}


//questao 20

#include <stdio.h>

int main() {
    char estadoCivil;

    printf("Insira seu estado civil (s - solteiro, c - casado, d - divorciado, v - viúvo): ");
    scanf(" %c", &estadoCivil);

    switch (estadoCivil) {
        case 's':
            printf("Você é solteiro.\n");
            break;
        case 'c':
            printf("Você é casado.\n");
            break;
        case 'd':
            printf("Você é divorciado.\n");
            break;
        case 'v':
            printf("Você é viúvo.\n");
            break;
        default:
            printf("Estado civil inválido.\n");
    }

    return 0;
}


//questao 21

#include <stdio.h>

int main() {
    int num1, num2, escolha;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Escolha a operação a ser realizada:\n");
    printf("1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf("%d", &escolha);
    
    switch(escolha) {
        case 1:
            printf("Resultado da Soma: %d\n", num1 + num2);
            break;
        case 2:
            printf("Resultado da Subtração: %d\n", num1 - num2);
            break;
        case 3:
            printf("Resultado da Multiplicação: %d\n", num1 * num2);
            break;
        case 4:
            if(num2 != 0)
                printf("Resultado da Divisão: %.2f\n", (float)num1 / num2);
            else
                printf("Erro: Divisão por zero!\n");
            break;
        default:
            printf("Escolha inválida!\n");
    }
    
    return 0;
}


//questao 22

#include <stdio.h>
#include <setjmp.h>

jmp_buf buffer;

void verificaIdade(int idade) {
    if (idade <= 0) {
        longjmp(buffer, 1);
    }
}

int main() {
    char nome[50];
    int idade;

    if (setjmp(buffer) == 0) {
        printf("Digite seu nome: ");
        scanf("%s", nome);

        printf("Digite sua idade: ");
        scanf("%d", &idade);

        verificaIdade(idade);

        printf("Nome: %s\n", nome);
        printf("Idade: %d\n", idade);
    } else {
        printf("Idade inválida. Certifique-se de digitar um valor inteiro positivo.\n");
    }

    return 0;
}


//questao 23

#include <stdio.h>

int main() {
    float metros;
    
    printf("Digite o valor em metros: ");
    if(scanf("%f", &metros) != 1) {
        printf("Entrada inválida. Certifique-se de inserir um número.\n");
        return 1;
    }

    float centimetros = metros * 100;
    float milimetros = metros * 1000;
    float quilometros = metros / 1000;

    printf("%.2f metros equivalem a:\n", metros);
    printf("%.2f centímetros\n", centimetros);
    printf("%.2f milímetros\n", milimetros);
    printf("%.6f quilômetros\n", quilometros);

    return 0;
}




