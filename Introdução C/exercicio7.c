#include <stdio.h>
#include <string.h>

int main()
{
    char nome[50];
    double valorHora, pagamento;
    int horaTrabalhada;

    printf("Nome: ");
    fgets(nome, 50, stdin);
    nome[strcspn(nome, "\n")] = '\0';  // Remove o '\n' que vem com o fgets

    printf("Valor por hora: ");
    scanf("%lf", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horaTrabalhada);

    pagamento = valorHora * horaTrabalhada;

    printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento);

    return 0;
}
