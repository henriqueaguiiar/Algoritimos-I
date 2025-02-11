#include <stdio.h>
#include <string.h>

int main (){

double precoUnitario, valorRecebido, troco;
int quantidade;

printf("Preco unitario do produto: ");
scanf("%lf", &precoUnitario);

printf("Quantidade comprada: ");
scanf("%d", &quantidade);

printf("Dinheiro recebido: ");
scanf("%lf", &valorRecebido);

troco = valorRecebido - (precoUnitario * quantidade);

printf("TROCO = %.2lf", troco);

return 0;
}
