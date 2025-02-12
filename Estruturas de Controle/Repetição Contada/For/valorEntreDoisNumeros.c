#include <stdio.h>
#include <stdlib.h>


int main(){

    int a, b, menor, maior;

    scanf("%d %d", &a, &b);

    if(a < b){
        menor = a;
        maior = b;
    }
    else{
        menor = b;
        maior = a;
    }

    for(int i = menor; i <= maior; i++){
        printf("%d ",i);
    }


    return 0;
}

