#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    int edad;
    int legajo;
    edad= pedirEntero("Ingrese edad: ", 18, 60);
    legajo= pedirEntero("Ingrese legajo: ", 1, 2000);
    return 0;
}



