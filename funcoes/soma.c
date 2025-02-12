#include <stdio.h>
#include <string.h>


int soma(int a, int b){
    int soma = a + b;

    return soma;
}

int main() {

    int a, b, resultado;

    printf("Digite dois valores para soma: ");

    scanf("%d %d", &a, &b);

    resultado = soma(a, b);

    printf("RESULTADO = %d", resultado);

    return 0;
}
