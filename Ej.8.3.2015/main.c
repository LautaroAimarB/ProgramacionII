#include <stdio.h>
#include <stdlib.h>

int ing_nro_y_proceso(int*, int*, int*);
int sumo_cuento(int*, int*, int*);
void imprimo(const int*, const int*, const int*);

int main()
{
    int suma, cant, nro, proceso_ok;
    proceso_ok = ing_nro_y_proceso(&nro, &cant, &suma);
    imprimo(&proceso_ok, &cant, &suma);
    return 0;
}

int ing_nro_y_proceso(int * p_nro, int* p_cant, int* p_suma)
{
    int flag = 0;
    *p_suma = 0;
    *p_cant = 0;
    printf("\n***Ingrese nro. (termina con 0)***\n\t");
    scanf("%d",p_nro);
    while(*p_nro)
    {
        sumo_cuento(p_nro, p_cant, p_suma); //Paso &nro, &cant, &suma; i.e. Los valores que están en mis variables punteros.

        system("cls");
        printf("\n");
        system("pause");
        system("cls");

        printf("\n***Ingrese nro. (termina con 0)***\n\t");
        scanf("%d",p_nro);
        flag = 1;
    }
    if(!flag)
        return 0;
    else
        return 1;
}

int sumo_cuento(int* p_nro, int* p_cant, int* p_suma)
{
    *p_suma += *p_nro;
    (*p_cant)++;
    return 1;
}
void imprimo(const int* ptro_ok, const int* p_cant, const int* p_suma)
{
    if(*ptro_ok)
        printf("\n***SUMA = '%d' ///// CANT = '%d'***\n\n", *p_suma, *p_cant);
    else
        printf("\n***No se procesaron nros distintos a cero!!!***\n");
    return;
}
