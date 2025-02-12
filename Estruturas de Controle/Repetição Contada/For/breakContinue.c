#include <stdio.h>
#include <string.h>

int main ()
{

   for(int i = 0; i< 6; i++){
        printf("%d\n", i);
    }
s
    for(int i = 0; i< 6; i++){
        if(i == 2){
            break;
        }
        printf("%d\n", i);
    }

        for(int i = 0; i< 6; i++){
        if(i == 2){
            continue;
        }
        printf("%d\n", i);
    }


return 0;
}

