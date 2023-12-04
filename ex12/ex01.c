#include <stdio.h>

// Função para imprimir as opções e solicitar a escolha do usuário
char imprimirOpcoes() {
    printf("Escolha a opcao de pagamento:\n");
    printf("a) A vista com 10%% de desconto\n");
    printf("b) Em duas vezes (preco da etiqueta)\n");
    printf("c) De 3 ate 10 vezes com 3%% de juros ao mes (somente para compras acima de R$ 100,00)\n");

    char opcao;
    printf("Opcao: ");
    scanf(" %c", &opcao);

    return opcao;
}

// Função para calcular e imprimir o valor total das prestações
void calcularPrestacoes(float valorTotal, char opcao) {
    switch (opcao) {
        case 'a':
            printf("Opcao escolhida: A vista com 10%% de desconto\n");
            printf("Valor total com desconto: R$ %.2f\n", valorTotal * 0.9);
            break;

        case 'b':
            printf("Opcao escolhida: Em duas vezes (preco da etiqueta)\n");
            printf("2x de R$ %.2f\n", valorTotal / 2);
            break;

        case 'c':
            if (valorTotal > 100.00) {
                printf("Opcao escolhida: De 3 ate 10 vezes com 3%% de juros ao mes\n");
                printf("Informe a quantidade de parcelas (3 a 10): ");
                int parcelas;
                scanf("%d", &parcelas);

                if (parcelas >= 3 && parcelas <= 10) {
                    float valorParcela = (valorTotal * 1.03) / parcelas;
                    printf("%dx de R$ %.2f\n", parcelas, valorParcela);
                } else {
                    printf("Quantidade de parcelas invalida.\n");
                }
            } else {
                printf("Compra abaixo de R$ 100.00. Opcao indisponivel.\n");
            }
            break;

        default:
            printf("Opcao invalida.\n");
    }
}

int main() {
    float valorTotal;

    // Solicita o total gasto pelo cliente
    printf("Informe o total gasto pelo cliente: R$ ");
    scanf("%f", &valorTotal);

    // Chama a função para imprimir opções e obter a escolha do usuário
    char opcaoEscolhida = imprimirOpcoes();

    // Chama a função correspondente à opção escolhida
    calcularPrestacoes(valorTotal, opcaoEscolhida);

    return 0;
}
