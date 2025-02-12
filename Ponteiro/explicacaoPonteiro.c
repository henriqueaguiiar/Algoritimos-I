#include <stdio.h>
#include <string.h>

// um ponteiro � util para manipula��o de dados em vez de usar copias de dados perdendo memoria, usamos o ponteiro
//para referenciar o o espa�o da memoria assim manipulando os dados que est�o alocados na mesma de forma mais eficiente.


//funcao que usa um ponteiro para modificar o tamanho de uma variavel
void aumentar(int *p) {
    (*p)++;
}

int main() {


int a = 5;
    aumentar(&a); // usa a funcao aumentar para modificar o tamanho da variavel a

    printf("%d\n", a); // Vai imprimir 6

    //imprime o tamanho de um tipo usando o sizeof
   printf("Tamanho de um int: %zu bytes\n", sizeof(int));


 //exemplos de declara��o de ponteiros em C

int x = 5; // crio a variavel inteira x e atribuo o valor 5 a ela

int *p = &x; // crio o ponteiro inteiro p e atribuo o endereco de x a ela

int y = 9; // crio a variavel inteira y e atribuo o valor 9 a ela

p = &y; // atribuo o endereco de y ao ponteiro p

return 0;
}

