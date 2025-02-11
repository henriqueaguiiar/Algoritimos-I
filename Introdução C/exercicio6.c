#include <stdio.h>
#include <string.h>
#include <math.h>


int main(){

double raio, area;

printf("Digite o valor do raio do circulo");
scanf("%lf", &raio);

area = M_PI * raio * raio;

printf("AREA = %.3lf", area);

return 0;
}
