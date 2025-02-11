#include <stdio.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}
int main(){

double largura, comprimento,
valorMetro, areaTerreno, precoTerreno;

printf("Digite a largura do terreno: ");
scanf("%lf", &largura);
printf("Digite o comprimento do terreno: ");
scanf("%lf", &comprimento);
printf("Digite o valor do metro quadrado: ");
scanf("%lf", &valorMetro);


areaTerreno = largura * comprimento;

precoTerreno = areaTerreno * valorMetro;

printf("Area do terreno = %.1lf\nPreco do terreno = %.1lf", areaTerreno, precoTerreno);

return 0;

}
