//questao 1

#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere;

    arquivo = fopen("arq.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    printf("Digite os caracteres (Digite '0' para sair):\n");

    do {
        scanf(" %c", &caractere);
        fputc(caractere, arquivo);
    } while (caractere != '0');

    fclose(arquivo);

    arquivo = fopen("arq.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    printf("\nConteúdo do arquivo:\n");

    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere);
    }

    fclose(arquivo);

    return 0;
}



//questao 2

#include <stdio.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[100];
    int contadorLinhas = 0;
    char caractere;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == '\n') {
            contadorLinhas++;
        }
    }

    fclose(arquivo);

    printf("O arquivo possui %d linhas.\n", contadorLinhas);

    return 0;
}


//questao 3

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivo;
    char caractere;
    int contVogais = 0;

    arquivo = fopen("arquivo.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (tolower(caractere) == 'a' || tolower(caractere) == 'e' || tolower(caractere) == 'i' || tolower(caractere) == 'o' || tolower(caractere) == 'u') {
            contVogais++;
        }
    }

    fclose(arquivo);

    printf("O arquivo possui %d vogais.\n", contVogais);

    return 0;
}


//questao 4

#include <stdio.h>

int main() {
    FILE *arquivo;
    char caractere, caractereUsuario;
    int contagem = 0;

    arquivo = fopen("arquivo.txt", "r");
    
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    printf("Digite o caractere a ser contado: ");
    scanf(" %c", &caractereUsuario);

    while ((caractere = fgetc(arquivo)) != EOF) {
        if (caractere == caractereUsuario) {
            contagem++;
        }
    }

    printf("O caractere '%c' ocorre %d vezes no arquivo.\n", caractereUsuario, contagem);

    fclose(arquivo);
    return 0;
}


//questao 5

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *entrada, *saida;
    char caractere;

    entrada = fopen("arquivo_entrada.txt", "r");
    saida = fopen("arquivo_saida.txt", "w");

    if (entrada == NULL || saida == NULL) {
        printf("Erro ao abrir arquivos.");
        return 1;
    }

    while ((caractere = fgetc(entrada)) != EOF) {
        fputc(toupper(caractere), saida);
    }

    fclose(entrada);
    fclose(saida);

    return 0;
}


//questao 6

#include <stdio.h>
#include <string.h>

int main() {
    char nomeArquivo[50];
    char palavra[50];
    char buffer[50];
    int contador = 0;

    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    printf("Digite a palavra a ser contada: ");
    scanf("%s", palavra);

    FILE *arquivo = fopen(nomeArquivo, "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "%s", buffer) == 1) {
        if (strcmp(buffer, palavra) == 0) {
            contador++;
        }
    }

    printf("A palavra '%s' aparece %d vezes no arquivo.\n", palavra, contador);

    fclose(arquivo);

    return 0;
}


//questao 7

#include <stdio.h>

int main() {
    char nome[50], telefone[15];
    FILE *arquivo;

    arquivo = fopen("cadastro.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while (1) {
        printf("Digite o nome: ");
        scanf("%s", nome);

        if (strcmp(telefone, "0") == 0) {
            break;
        }

        printf("Digite o telefone (ou '0' para sair): ");
        scanf("%s", telefone);

        if (strcmp(telefone, "0") == 0) {
            break;
        }

        fprintf(arquivo, "%s %s\n", nome, telefone);
    }

    fclose(arquivo);
    printf("Cadastro concluído. Verifique o arquivo 'cadastro.txt'.\n");

    return 0;
}


//questao 8

#include <stdio.h>

int main() {
    FILE *arquivo;
    char nome[50];
    float preco, total = 0;

    arquivo = fopen("produtos.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.");
        return 1;
    }

    while (fscanf(arquivo, "%s %f", nome, &preco) == 2) {
        total += preco;
    }

    fclose(arquivo);

    printf("O total da compra é: R$ %.2f\n", total);

    return 0;
}


