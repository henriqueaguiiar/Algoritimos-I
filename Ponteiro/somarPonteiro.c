#include <stdio.h>
#include <string.h>

int maisUm (int *a) {
    *a = *a + 1;  // O valor da vari�vel apontada por 'a' � incrementado em 1.
}

int main() {
    int a = 1;  // Declara��o e inicializa��o da vari�vel 'a'.
    maisUm(&a); // Chama a fun��o 'maisUm', passando o endere�o de mem�ria de 'a'. faz com que a fun��o tenha acesso a posi��o da  variavel a

    printf("%d\n", a);  // Imprime o valor de 'a' ap�s a fun��o ter incrementado seu valor.

    return 0;
}

/*
Explica��o:

Fun��o maisUm:
- Recebe um ponteiro para um inteiro (int *a), ou seja, um endere�o de mem�ria onde um valor inteiro est� armazenado.
- No corpo da fun��o, o valor da vari�vel que 'a' aponta � incrementado em 1 (isto �, a opera��o *a = *a + 1).

Fun��o main:
- Declara uma vari�vel inteira 'a' e a inicializa com o valor 1.
- Chama a fun��o maisUm, passando o endere�o de mem�ria de 'a' para que a fun��o modifique diretamente o valor de 'a'.
- Imprime o valor de 'a' ap�s a fun��o maisUm ter incrementado seu valor de 1.
*/
