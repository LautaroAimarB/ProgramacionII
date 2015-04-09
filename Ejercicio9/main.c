#include <stdio.h>
#include <stdlib.h>

int ingreso(int*, int*);
int dividir_int(const int*, const int*, int*);
void imprimir(const int*, const int*, const int*, const int*);

int main()
{
    int num_a, num_b, resto, resultado;
    ingreso(&num_a, &num_b);
    resto = dividir_int(&num_a, &num_b, &resultado);
    imprimir(&num_a, &num_b, &resultado, &resto);
    return 0;
}

int ingreso(int* pnum_a, int* pnum_b)
{
    do{
        printf(" /// Ingrese numerador: ");
        scanf("%d", pnum_a);
        system("cls");
    }while(*pnum_a < 0);
    do{
        printf(" /// Ingrese denominador: ");
        scanf("%d", pnum_b);
        system("cls");
    }while(*pnum_b <= 0);

    return 1;
}

int dividir_int(const int* pnum_a, const int* pnum_b, int* p_resultado)
{
    int resto = *pnum_a;
    *p_resultado = 0;
        while(resto >= *pnum_b) //Si no se cumple el numerador es 0, y resultado/resto son cero.
        {
            resto -= (*pnum_b); //Divide por resta sucesiva
            (*p_resultado)++;
        }
    if(!(*p_resultado))
        return 0; //Devuelvo de resto el cero por ser numerador = 0
    else
        return resto;
}

void imprimir(const int* pnum_a, const int* pnum_b, const int* p_resultado, const int* p_resto)
{
    printf("\n /// La division '%d/%d' es igual a '%d'\n\n /// El resto es: '%d'\n\n", *pnum_a, *pnum_b, *p_resultado, *p_resto);
    return;
}
