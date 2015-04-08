#include <stdio.h>
#include <stdlib.h>

int factorial(int);

int main()
{
    int m, n, combinat;

    printf("**Ingrese nro m**\n\n");
    scanf("%d",&m);
    printf("**Ingrese nro n**\n\n");
    scanf("%d",&n);
    combinat = factorial(m) / (factorial(n) * factorial(m-n));
    printf("\n\n**El nro combinatorio de m/n es %d**\n\n",combinat);
    system("pause");
}

int factorial(int nro)
{
    int x = 1;
    if(nro != 0)
        {
        x = nro * factorial(nro-1);
        }
    else
        return(x);
}
