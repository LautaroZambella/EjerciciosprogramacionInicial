/*
Se desea realizar un programa para calcular el sueldo final a pagar a cada empleado de una empresa. De
cada uno se tiene, sueldo básico, antigüedad, cantidad de hijos y estudios superiores (‘S’ o ‘N’). Además, se
conocen los porcentajes de aumento del sueldo que dependen de los siguientes factores:
• Si el empleado tiene más de 10 años de antigüedad: aumento del 10%
• Si el empleado tiene más de 2 hijos: aumento del 10%, si solo tiene uno 5%
• Si el empleado posee estudios superiores: aumento del 5%
Luego de ingresar los datos de un empleado se debe preguntar si se desea ingresar otro empleado o no. Se
termina la carga cuando no se deseen ingresar más empleados.
Determinar:
a. Por cada empleado: número de empleado, el sueldo básico y el nuevo sueldo.
b. Sueldo nuevo promedio de la empresa.
*/

#include <stdio.h>
#include<stdlib.h> 

int main () {

    int antiguedad, hijos, empleadoNumber, cantidadEmpleados;
    float sueldoBasico, nuevoSueldo, sueldoProm;
    char estudios;

    cantidadEmpleados = 0;

    do {
         
        printf("Ingrese el numero de empleado o el numero 0 para terminar\n");
        scanf("%d", &empleadoNumber);
        if (empleadoNumber == 0) {
            printf("");
        } else {
            printf("Ingrese la cantidad de hijos\n");
            scanf("%d",&hijos);
            printf("Ingrese la antiguedad del empleado: \n");
            scanf("%d",&antiguedad);
            printf("Ingrese el sueldo basico del epmleado: \n");
            scanf("%f",&sueldoBasico);
            fflush(stdin);
            printf("Ingrese si tiene estudios superiores: \n");
            scanf("%c",&estudios);

            nuevoSueldo = sueldoBasico;

            if (antiguedad > 10) {
                nuevoSueldo += 0.10*sueldoBasico;
            }

            if (hijos == 1) {
                nuevoSueldo += 0.05*sueldoBasico;
            } else if (hijos >= 2) {
                nuevoSueldo += 0.10*sueldoBasico;
            }

            if (estudios == 's') {
                nuevoSueldo += 0.05*sueldoBasico;
            }

            cantidadEmpleados++;
            sueldoProm += nuevoSueldo/cantidadEmpleados;

            printf("El empleado con el numero: %d tenia un sueldo de %f y ahora es de %f \n", empleadoNumber, sueldoBasico, nuevoSueldo);
            printf("El sueldo promedio de la empresa es de %f\n", sueldoProm);
            printf("Numero de vueltas: %d\n", cantidadEmpleados);
           


        }

    } while (empleadoNumber != 0);
}