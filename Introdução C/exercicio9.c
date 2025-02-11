#include <stdio.h>
#include <string.h>

int main()
{

    double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);

    areaQuadrado = a * a;
    areaTriangulo = a * b / 2;
    areaTrapezio = (a + b) * c / 2;

    printf("AREA DO QUADRADO = %.4lf\nAREA DO TRIANGULO = %.4lf\nAREA DO TRAPEZIO = %.4lf", areaQuadrado, areaTriangulo, areaTrapezio);



    return 0;
}


