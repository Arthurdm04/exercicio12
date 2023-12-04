#include <stdio.h>

// Função para imprimir a matriz
void imprimirMatriz(int matriz[61][10]) {
    for (int i = 0; i < 61; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

// Procedimento para somar individualmente as colunas e armazenar na 61a linha
void somarColunasMatriz(int matriz[61][10]) {
    for (int j = 0; j < 10; j++) {
        int soma = 0;
        for (int i = 0; i < 61; i++) {
            soma += matriz[i][j];
        }
        matriz[60][j] = soma;
    }
}

int main() {
    int matriz[61][10];

    // Preencha a matriz com dados reais ou valores fictícios
    // Aqui você pode usar um loop para preencher a matriz com dados reais ou valores gerados aleatoriamente

    // Chama o procedimento para somar individualmente as colunas
    somarColunasMatriz(matriz);

    // Exibe a matriz resultante após a soma das colunas
    printf("Matriz apos a soma das colunas:\n");
    imprimirMatriz(matriz);

    return 0;
}
