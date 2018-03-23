/*Se ingresan numeros (ser distintos de cero), no se sabe cuantos.
se pide mostrar:
    cantidad de pares e impares.
    porcentaje de numeros positivos y negativos.
    maximo y minimo
    maximo numero par
    cantidad de numeros comprendidos entre 125 y 236.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char respuesta= 's';
    int cantidadPar=0;
    int cantidadImpar=0;
    int contNegativos=0;
    int contPositivos=0;
    int contNumeros;
    float porcentajePositivos;
    float porcentajeNegativos;
    int max;
    int min;
    int flag=0;


    while (respuesta!='n')
    {
        printf("Ingrese un numero:");
        scanf("%d", &numero);

        while(numero==0)
        {
            printf("\nReingrese un numero:");
            scanf("%d", &numero);
        }

        if(numero%2==0)   //saca el resto para saber si es PAR
        {
            cantidadPar++;
        }
        else
        {
            cantidadImpar++;
        }

        if(numero>0)
        {
            contPositivos++;
        }
        else
        {
            contNegativos++;
        }


        if(flag==0)
        {
            max= numero;
            min= numero;
            flag=1;
        }
        else
        {
            if(numero<min)
            {
                min=numero;
            }
            if(numero>max)
            {
                max=numero;
            }
        }




        printf("Desea continuar?");
        respuesta= getche();


    }

    contNumeros= contNegativos + contPositivos;

    porcentajePositivos=  (float)(contPositivos*100)/contNumeros;      //(contPositivos*100)/contNumeros;
    porcentajeNegativos=  100 - porcentajePositivos;         //(contNegativos*100)/contNumeros//

    printf("\nla cantidad de pares es: %d",cantidadPar);
    printf("\nLa cantidad de Impares es: %d",cantidadImpar);
    printf("\nLa cantidad de Porcentaje de Positivos es: %% %.2f",porcentajePositivos);
    printf("\nLa cantidad de Porcentaje de Negativos es: %% %.2f",porcentajeNegativos);
    printf("\nEl maximo es: %d",max);
    printf("\nEl minimo es: %d",min);


    return 0;
}
