#include <stdio.h>
#include <string.h>

int main()
{

    double distanciaTotal, combustivelGasto, consumoMedio;

    printf("Distancia percorrida: ");
    scanf("%lf", &distanciaTotal);
    printf("Combustivel gasto: ");
    scanf("%lf", &combustivelGasto);

    consumoMedio = distanciaTotal / combustivelGasto;

    printf("Consumo medio = %.3lf", consumoMedio);

    return 0;
}
