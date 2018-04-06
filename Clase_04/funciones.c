#include <stdio.h>
#include "funciones.h"


int pedirEntero (char mensaje[], int min, int max)
{
    int numero;
    printf("%s",mensaje);
    scanf("%d",&numero);

    while(numero<min || numero>max)
    {
        printf("ERROR!! %s",mensaje);
        scanf("%d",&numero);

    }

    return numero;
}
