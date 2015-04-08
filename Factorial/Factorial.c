#include<stdio.h>

int factorial(int);

void main(void)
{
    int nro, x;

    printf("**Ingrese nro a obtener factorial**\n\n");
    scanf("%d",&nro);
    x = factorial(nro);
    printf("\n\n**El factorial es %d**\n\n",x);
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
