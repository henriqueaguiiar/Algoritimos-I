#include <stdio.h>
#include <string.h>

int maisUm (int *a) {
    *a = *a + 1;  // O valor da variável apontada por 'a' é incrementado em 1.
}

int main() {
    int a = 1;  // Declaração e inicialização da variável 'a'.
    maisUm(&a); // Chama a função 'maisUm', passando o endereço de memória de 'a'. faz com que a função tenha acesso a posição da  variavel a

    printf("%d\n", a);  // Imprime o valor de 'a' após a função ter incrementado seu valor.

    return 0;
}

/*
Explicação:

Função maisUm:
- Recebe um ponteiro para um inteiro (int *a), ou seja, um endereço de memória onde um valor inteiro está armazenado.
- No corpo da função, o valor da variável que 'a' aponta é incrementado em 1 (isto é, a operação *a = *a + 1).

Função main:
- Declara uma variável inteira 'a' e a inicializa com o valor 1.
- Chama a função maisUm, passando o endereço de memória de 'a' para que a função modifique diretamente o valor de 'a'.
- Imprime o valor de 'a' após a função maisUm ter incrementado seu valor de 1.
*/
