int buscaBinaria(int vetor[], int tamanho, int valor, int *iteracoes) {
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;
    *iteracoes = 0;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        (*iteracoes)++;

        if (vetor[meio] == valor) {
            return meio;
        }
        else if (vetor[meio] < valor) {
            inicio = meio + 1;
        }
        else {
            fim = meio - 1;
        }
    }

    return -1;
}
