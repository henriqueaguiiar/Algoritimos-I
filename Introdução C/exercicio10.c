#include <stdio.h>
#include <string.h>

int main()
{

    double duracaoEmSegundos;

    int horas, minutos, segundos;

    printf("Digite a duracao em segundos: ");
    scanf("%lf", &duracaoEmSegundos);

    horas = (int)duracaoEmSegundos / 3600;
    minutos =  (int)(duracaoEmSegundos) % 3600 / 60;
    segundos = (int)(duracaoEmSegundos) % 3600 % 60;

    printf("%02d:%02d:%02d\n", horas, minutos, segundos);

    return 0;
}


