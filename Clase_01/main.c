#include <stdio.h>
#include <stdlib.h>

/**
*
*@param
*@return
*/



int main()
{
    char Letra;
    float sueldo;
    int porcentaje;
    float aumento;
    float sueldoFinal;

    printf("Ingrese su nombre: ");
    scanf("%c",&Letra);

    printf("Ingrese su sueldo: ");
    scanf("%f",&sueldo);

    printf("Ingrese su aumento: ");
    scanf("%d",&porcentaje);

    aumento = (porcentaje * sueldo) /100;
    sueldoFinal= sueldo+aumento;

    printf(" Su nombre es : %c\n Su sueldo es: %.2f\n Su aumento es: %d\n Su sueldo Final es de %.2f\n Con aumento de: %.0f", Letra,sueldo,porcentaje,sueldoFinal, aumento) ;
    return 0;
}
