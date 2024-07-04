/*
Se ingresan datos de los empleados de una empresa. Por cada empleado se ingresa:
• Legajo (entero entre 1000 y 5000)
• Sueldo básico (float mayor a 1000)
• Antigüedad en años (mayor o igual a 0)
• Sexo (‘M' o 'F')
• Categoría (entero entre 1 a 5)
Por cada empleado ingresado se debe calcular el sueldo final a abonar sabiendo que:
• Las Categorías 2 y 3 tienen $500 de bonificación.
• La Categoría 4 tiene 10% de bonificación.
• La Categoría 5 tiene 30% de bonificación.
• Si la antigüedad es mayor a 10 años recibe una bonificación del 10% adicional.
Todos los datos ingresados deben ser validados. El ingreso finaliza con un legajo igual a cero.
Informar:
• El sueldo a abonar a cada empleado.
• Cantidad de empleados de más de 10 años de antigüedad.
• El mayor sueldo y el legajo del empleado que cobra dicho sueldo.
• Cantidad de hombres y de mujeres
*/

#include <stdio.h>
#include <stdlib.h>

int main () {
    int legajo, antiguedad, categoria, cantExperimentados, legajoAlto, cantHom, cantMuj;
    float sueldoBasico, sueldoFinal, mayorSueldo;
    char sexo;

    sueldoBasico = 0;
    sueldoFinal = 0;
    mayorSueldo = 0;
    cantExperimentados = 0;
    cantHom = 0;
    cantMuj = 0;
    legajo = 0;
    legajoAlto = 0;

    do {
        printf("Ingrese el legajo, o un 0 para terminar\n");
        scanf("%d",&legajo);
        if (legajo == 0) {
            printf("Programa finalizado!\n");
        } 
    } while((legajo<1000 || legajo>5000) && legajo!=0);

    
    while (legajo != 0) {
        do {
            printf("Ingrese el suelod: \n");
            scanf("%f",&sueldoBasico);
        }while (sueldoBasico < 1000);

        if (sueldoBasico > mayorSueldo) {
            mayorSueldo = sueldoBasico;
            legajoAlto = legajo;
        }

        do {
            printf("Ingrese la antiguedad del empleao: \n");
            scanf("%d",&antiguedad);
        } while(antiguedad < 0);

        do{
            printf("Ingrese el sexo: \n");
             fflush(stdin);
            scanf("%c",&sexo);
            fflush(stdin);
        }while (sexo != 'f' && sexo != 'm');

        do {
            printf("Ingrese la categoria: \n");
            scanf("%d",&categoria);
        } while (categoria < 1 || categoria > 5);

        switch(categoria) {
            case 2:
            case 3:
                sueldoBasico += 500;
                break;
            case 4:
                sueldoBasico += 0.1*sueldoBasico;
                break;
            case 5: 
                sueldoBasico += 0.3*sueldoBasico;
        }
        if (antiguedad > 9) {
            sueldoBasico += 0.1*sueldoBasico;
            cantExperimentados++;
        }

        if (sexo == 'f') {
            cantMuj++;
        } else if (sexo == 'm'){
            cantHom++;
        }

        printf("el empleado con el legajo: %d tiene que cobrar %10.2f\n", legajo, sueldoBasico);
        printf("Hay %d empleados con antiguedad  mayor a 10\n", cantExperimentados);
        printf("Hay %d empleadas mujersy %d empleados homres", cantMuj, cantHom);
        

        do {
            printf("Ingrese el legajo, o un 0 para terminar\n");
            scanf("%d",&legajo);
            } while((legajo<1000 || legajo>5000) && legajo!=0);
    }

    printf("el mayor sueldo vale %f y pertenece al empleado de legajo %d", mayorSueldo, legajoAlto);

}
