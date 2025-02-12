#include <stdio.h>


void determinarVencedor(int bino, int cino) {
    int soma = bino + cino;

    if (soma % 2 == 0) {
        printf("Bino\n");
    } else {
        printf("Cino\n");
    }
}

int main() {
    int bino, cino;


    scanf("%d", &bino);
    scanf("%d", &cino);


    determinarVencedor(bino, cino);

    return 0;
}
