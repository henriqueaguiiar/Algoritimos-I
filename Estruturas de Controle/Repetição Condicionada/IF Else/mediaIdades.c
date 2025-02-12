#include <stdio.h>
#include <string.h>


int main(){
   double media;

   int idade = 0, soma = 0, contador = 0;


    printf("Digite as idades: \n");
    scanf("%d", &idade);

    if(idade < 0){
        printf("Impossivel Calcular");
    }
    else{
        while(idade>=0){
            soma += idade;
            contador++;
            scanf("%d", &idade);
        }
        media = (double)soma/contador;
        printf("MEDIA = %.2lf\n", media);
    }


return 0;
}
