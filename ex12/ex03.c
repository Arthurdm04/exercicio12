#include <stdio.h>

// Função para imprimir a matriz
void imprimirMatriz(int matriz[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
}

// Procedimento para realizar as trocas na matriz
void realizarTrocas(int matriz[10][10]) {
    // Troca a linha 2 com a linha 8
    for (int j = 0; j < 10; j++) {
        int temp = matriz[1][j];
        matriz[1][j] = matriz[7][j];
        matriz[7][j] = temp;
    }

    // Troca a coluna 4 com a coluna 10
    for (int i = 0; i < 10; i++) {
        int temp = matriz[i][3];
        matriz[i][3] = matriz[i][9];
        matriz[i][9] = temp;
    }

    // Troca a diagonal principal com a secundária
    for (int i = 0; i < 10; i++) {
        int temp = matriz[i][i];
        matriz[i][i] = matriz[i][9 - i];
        matriz[i][9 - i] = temp;
    }

    // Troca a linha 5 com a coluna 10
    for (int j = 0; j < 10; j++) {
        int temp = matriz[4][j];
        matriz[4][j] = matriz[j][9];
        matriz[j][9] = temp;
    }
}

int main() {
    int matriz[10][10];

    // Preencha a matriz com dados reais ou valores fictícios
    // Aqui você pode usar um loop para preencher a matriz com dados reais ou valores gerados aleatoriamente

    // Chama o procedimento para realizar as trocas na matriz
    realizarTrocas(matriz);

    // Exibe a matriz resultante após as trocas
    printf("Matriz apos as trocas:\n");
    imprimirMatriz(matriz);

    return 0;
}
