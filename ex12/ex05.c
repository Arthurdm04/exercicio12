#include <stdio.h>
#include <time.h>

// Função para calcular a idade em dias, meses e anos
void calcularIdade(int diaNasc, int mesNasc, int anoNasc, int *dias, int *meses, int *anos) {
    // Obtemos a data atual
    time_t t;
    struct tm *dataAtual;
    time(&t);
    dataAtual = localtime(&t);

    int diaAtual = dataAtual->tm_mday;
    int mesAtual = dataAtual->tm_mon + 1;  // tm_mon é baseado em zero, então adicionamos 1
    int anoAtual = dataAtual->tm_year + 1900;  // tm_year é o número de anos desde 1900

    // Calculamos a idade em dias, meses e anos
    *dias = diaAtual - diaNasc;
    *meses = mesAtual - mesNasc;
    *anos = anoAtual - anoNasc;

    // Corrigimos valores negativos
    if (*dias < 0) {
        *meses -= 1;
        *dias += 30;  // Assumindo que cada mês tem 30 dias (pode não ser preciso em todos os casos)
    }
    if (*meses < 0) {
        *anos -= 1;
        *meses += 12;
    }
}

int main() {
    int diaNasc, mesNasc, anoNasc;

    // Solicita a data de nascimento
    printf("Informe a data de nascimento (DD MM AAAA): ");
    scanf("%d %d %d", &diaNasc, &mesNasc, &anoNasc);

    // Chama a função para calcular a idade
    int dias, meses, anos;
    calcularIdade(diaNasc, mesNasc, anoNasc, &dias, &meses, &anos);

    // Exibe a idade calculada
    printf("Idade: %d anos, %d meses, %d dias\n", anos, meses, dias);

    return 0;
}
