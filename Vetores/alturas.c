#include <sdtio.h>
#include <string.h>

int main(){

    int n, nmenores;
    double soma = 0, media, percentual;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n];
    double altura[n];

    for(int i = 0; i < 0; i++){
        printf("Dados da %da pessoa: \n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nomes[i]);
        printf("Idades: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    for(int i = 0; i< n; i++){
        soma = soma + altura[i];
    }

    media = soma / n;

    printf("Altura media: %.2lf\n:",media)

    nmenores = 0;
    for(int i = 0; i< n; i++){
        if(idades[i < 16]){
            nmenores = nmenores +1;
        }
    }

    percentual = nmenores * 100.0 / n;

    printf("Pessoas com menos de 16 anos: %.1lf%%",percentual);


    return 0;
}

