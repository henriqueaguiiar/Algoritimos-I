#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{

    char nome1[50], nome2[50];
    int idade1, idade2;
    double media;

    printf("Dados da primeira pessoa: ");
    printf("Nome: ");
    fgets(nome1, 50, stdin);
    strtok(nome1, "\n");
    printf("Idade: ");
    scanf("%d", &idade1);

    limpar_entrada();
    printf("Dados da segunda pessoa: ");
    printf("Nome: ");
    fgets(nome2, 50, stdin);
    strtok(nome2, "\n");
    printf("Idade: ");
    scanf("%d", &idade2);


    media = (idade1 + idade2) / 2;

    printf("A idade media de %s e %s eh de %.1f anos", nome1, nome2 , media);


    return 0;
}
