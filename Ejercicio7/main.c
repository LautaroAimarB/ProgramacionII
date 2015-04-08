#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ingreso(int*);
char* proceso(const int*, int*);
void imprimo(const int*, const int*, const char*);


int main()
{
    int nro, suma;
    char* result;
    ingreso(&nro);
    result = proceso(&nro, &suma);
    imprimo(&nro, &suma, result);
    return 0;
}

int ingreso(int* p_nro)
{
    do{
    printf("//Ingrese nro natural: ");
    scanf("%d", p_nro);
    system("cls");
    }while(*p_nro <= 0);
    return 1;
}

char* proceso(const int* p_nro, int* p_suma)
{
    int i = 1;
    *p_suma = 0;
    while(i < *p_nro && *p_nro )
        {
        if(!(*p_nro % i))
        {
            (*p_suma)+=i;
            i++;
        }
        else
            i++;
        }
    if(*p_suma < *p_nro)
        {
         return "deficiente";
        }
    else
        if(*p_suma > *p_nro)
            return "abundante";
        else
            return "perfecto";
}

void imprimo(const int* p_nro, const int* p_suma, const char* p_result)
{
    printf("\n///La suma de los divisores de %d es: %d !!!", *p_nro, *p_suma);
    printf("\n\n Por lo tanto el nro %d, es considerado como '%s'\n\n", *p_nro, p_result);
    return;
}
