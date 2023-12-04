#include <stdio.h>

// Procedimento para calcular a quantidade de locações gratuitas para cada cliente
void calcularLocacoesGratuitas(int vetorA[], int locacoesGratuitas[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        // Para cada 15 filmes retirados, o cliente tem direito a uma locação grátis
        locacoesGratuitas[i] = vetorA[i] / 15;
    }
}

int main() {
    // Tamanho do vetor A
    int tamanho = 500;

    // Vetor A contendo a quantidade de filmes retirados por cada cliente
    int vetorA[tamanho];

    // Preencha o vetor A com os dados reais da locadora (exemplo fictício)
    // Aqui você pode usar um loop para preencher o vetor com dados reais da sua locadora
    // Por exemplo, pode ser gerado aleatoriamente ou lido de um arquivo

    // Vetor para armazenar a quantidade de locações gratuitas para cada cliente
    int locacoesGratuitas[tamanho];

    // Chama o procedimento para calcular as locações gratuitas
    calcularLocacoesGratuitas(vetorA, locacoesGratuitas, tamanho);

    // Exemplo de impressão dos resultados
    for (int i = 0; i < tamanho; i++) {
        printf("Cliente %d: %d locacoes gratuitas\n", i + 1, locacoesGratuitas[i]);
    }

    return 0;
}
