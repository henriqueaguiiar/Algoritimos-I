#include <sdtio.h>
#include <string.h>

int main(){
    int x, y, soma, troca;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &x, &y);

    if(x > y){
        troca = x;
        x = y;
        y = troca;
    }

    for(int i = x+1; <y; i++){
        if(i % 2 != 0){

        }
    }

    return 0;
}

