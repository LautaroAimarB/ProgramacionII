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
    int fact = 1 , c;
    if(nro)
        for(c = 1; c <= nro; c++)
            fact = fact * c;
    else
        return(fact);

    return(fact);
}
