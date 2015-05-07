#include <stdio.h>
#include <stdlib.h>
#define FIL 2
#define COL 3

int menuMat(void);
int proceso(int, int**);
void mostrar(int**);
int main()
{
    int opc;
    int matriz[][3] = {{1,2,3},{4,5,6}};
    system("pause");
    opc = menuMat();
    while(proceso(opc, matriz) )     // Chequeo lo que devuelve proceso.
    {
        opc = menuMat();
    }
    return 0;
}

int menuMat(void)
{
    int opc;

    do{
        printf("*************************\n");
        printf("*\t1-Mostrar\t*\n");
        printf("*\t2-Cargar\t*\n");
        printf("*\t3-Etcetera\t*\n");
        printf("*************************\n\n");
        scanf("%d",&opc);
        system("cls");
    }while(opc<1 || opc>3);
    return opc;
}

int proceso(int opc, int*m[])
{
    int vuelta; //Valor a devolver al while del main
    switch(opc)
    {
    case 1:
        mostrar(m);
        break;
    case 2:

        break;
    case 3:

        break;
    }
    do{
    printf("\n\nVolver = 1 // Finalizar = 0\n\n");
    scanf("%d",&vuelta);
    system("cls");
    }while(vuelta<0 || vuelta >1);
    return vuelta;
}

void mostrar(int* m[])
{

    int i, j;
    for(i = 0;i < FIL; i++)
    {
        printf("\n");
        for(j = 0;j < COL; j++)
            printf("%d ", m[i][j]);
    }
}
