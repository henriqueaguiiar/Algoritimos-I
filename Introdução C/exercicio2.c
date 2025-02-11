#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){

    double base, altura, area, perimetro, diagonal;

    printf("Base do retangulo: ");
    scanf("%lf", &base);
    printf("Altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt((base*base)+(altura*altura));

    printf("Area do retangulo = %.2lf\nPerimetro = %.2lf\nDiagonal = %.2lf",area, perimetro, diagonal);

return 0;
}
