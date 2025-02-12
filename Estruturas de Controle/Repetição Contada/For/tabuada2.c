#include <stdio.h>
#include <stdlib.h>


int main()
{

    int n, produto;

    scanf("%d", &n);

    for(int i = 1; i<= 10; i++)
    {
        produto  = n * i;
        printf("%d * %d = %d\n",n, i, produto);
    }
    return 0;
}
