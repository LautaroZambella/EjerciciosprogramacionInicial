/*
Ingresar N y N Números naturales. Determinar e informar:
a. La sumatoria de los valores múltiplos de 3.
b. La cantidad de valores múltiplos de 5.
c. La sumatoria de los valores que se ingresan en orden par.
*/

#include <stdio.h>

int main () {

    int i, numerosIngresados, cantidadTotal, sumaMultiplosTres, sumaMultiplosCinco, sumaPares;

    sumaMultiplosCinco = 0;
    sumaMultiplosTres = 0;
    sumaPares = 0;


    printf("Ingrese cuantos numeros ingresara\n");
    scanf("%d", &cantidadTotal);

    for (i = 1; i <= cantidadTotal; i++) {
        printf("Ingrese el numero %d a ingresar\n", i);
        scanf("%d",&numerosIngresados);

        if (numerosIngresados % 3 == 0) {
            sumaMultiplosTres += numerosIngresados;
        }

        if (numerosIngresados % 5 == 0) {
            sumaMultiplosCinco += numerosIngresados;
        }

        if (numerosIngresados % 2 == 0) {
            sumaPares += numerosIngresados;
        }
    }

    printf("La suma de los multiplos de 3 es: %d, la de los multiplos de 5 es: %d y la de los pares es: %d", sumaMultiplosTres, sumaMultiplosCinco, sumaPares);

}