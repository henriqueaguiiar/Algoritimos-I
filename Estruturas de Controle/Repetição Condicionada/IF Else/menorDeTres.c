#include <stdio.h>
#include <string.h>


int main(){

    int a, b, c;
    int menorNumero;

    printf("First Value: ");
    scanf("%d", &a);
    printf("Second Value: ");
    scanf("%d", &b);
    printf("Third Value: ");
    scanf("%d", &c);

    if(b > a || a < b){
        menorNumero = a;
    }
    else if(b < c || c > b){
        menorNumero = b;
    }
    else{
        menorNumero = c;
    }

    printf("MENOR = %d", menorNumero);

return 0;
}

