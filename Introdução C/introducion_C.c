#include <stdio.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){

    double salario1, salario2;
    char nome1[50] ,nome2[50];
    char sexo1, sexo2;
    int idade1, idade2;

    printf("Nome da primeira pessoa: ");
    fgets(nome1, 50, stdin);
    strtok(nome1, "\n");
    printf("Salario da primeira pessoa: ");
    scanf("%lf", &salario1);
    printf("Digite um sexo: (M/F)");
    scanf("%c", &sexo1);
    limpar_entrada();
    printf("Digite uma idade: ");
    scanf("%d", &idade1);

    limpar_entrada();
    printf("Nome da segunda pessoa: ");
    fgets(nome2, 50, stdin);
    strtok(nome2, "\n");
    printf("Salario da segunda pessoa: ");
    scanf("%lf", &salario2);
    printf("Digite um sexo: (M/F)");
    limpar_entrada();
    scanf("%c", &sexo2);
    printf("Digite uma idade: ");
    scanf("%d", &idade2);

    printf("\n");
    printf("Nome 1: %s\n", nome1);
    printf("Salario 1: %.2lf\n", salario1);
    printf("Idade: %d\n", idade1);
    printf("Sexo: %c\n", sexo1);

    printf("Nome 2: %s\n", nome2);
    printf("Salario 2: %.2lf\n", salario2);
    printf("Idade: %d\n", idade2);
    printf("Sexo: %c\n", sexo2);


 return 0;
}
