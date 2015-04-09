#include <stdio.h>
#include <stdlib.h>

int ingreso(int*, int*);
int proceso(const int*, const int*, int*);
void imprimo(const int*, const int*, const int*);
int main()
{
    int nroA, nroB, result;
    ingreso(&nroA, &nroB);
    proceso(&nroA, &nroB, &result);
    imprimo(&nroA, &nroB, &result);
    return 0;
}

int ingreso(int* p_a, int* p_b)
{
    do{
        printf("****Ingrese nro A [ >= a '0']****\n\n");
        scanf("%d",p_a);
        system("cls");
        }while(*p_a < 0);
    do{
        printf("****Ingrese nro B [ >= a '0']****\n\n");
        scanf("%d",p_b);
        system("cls");
        }while(*p_b < 0);

    return 1;
}
int proceso(const int* p_a, const int* p_b, int* p_result)
{
    int i;
    *p_result = 0;

    if(*p_a <= *p_b)
        for(i = 0; i < *p_a; i++)
            (*p_result)+=(*p_b);
    else
        for(i = 0; i < *p_b; i++)
            (*p_result)+=(*p_a);

    return 1;
}
void imprimo(const int* p_a, const int* p_b, const int* p_result)
{
    printf("\n\n /// La multip. por suma sucesiva de los nros %d y %d es: '%d' ///\n\n", *p_a, *p_b, *p_result);
    return;
}
