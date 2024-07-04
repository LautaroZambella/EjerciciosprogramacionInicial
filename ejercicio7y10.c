/*
7.10 Se procesan los datos de los casi 90 alumnos de un turno de la materia Elementos de Programación. Por
cada alumno se ingresan:
• DNI (entero, mayor que cero y menor que 99.999.999).
• Nota del Parcial 1 (entero, de 0 a 10).
• Nota del Parcial 2 (entero, de 0 a 10).
• Porcentaje de asistencia (real, mayor o igual a cero).
Para finalizar, se ingresa un DNI igual a cero.
Se pide informar con las leyendas aclaratorias y/o títulos:
a. Según los parciales si promocionó, aprobó, reprobó o estuvo ausente (uno o ambos parciales igual
a cero).
b. Listar los alumnos que no cumplen con la asistencia (mayor o igual a 75%).
c. Informar cuántos alumnos que promocionaron NO cumplen en la asistencia.
d. Informar los alumnos que sacaron 10 en el parcial 2.
e. Al finalizar, informar el promedio total de notas de cada parcial y de asistencia.
*/

#include <stdio.h>

void resultado(int[], int[], int[]);
void attendance(int[], float[]);
void cuentita (int[],int[],int[],float[]);
void godSegundoParcial(int[], int[]);

int main (){

    int DNI[90] = {0};
    int parcial1[90] = {0};
    int parcial2[90] = {0};
    float asistencia[90] = {0};
    int num = 0;

    do {
        printf("\nIngrese el numero de alumno\n");
        scanf("%d",&num);
    } while (num < 1 || num > 90);

    do {
        printf("\nIngrese el DNI del alumno (0 para finalizar)\n");
        scanf("%d",&DNI[num-1]);
    } while (!((DNI[num -1] >= 1 && DNI[num -1] <= 99999999) || DNI[num -1]==0));

    while (DNI[num-1] != 0){
        do {
        printf("\nIngrese la nota del primer parcial\n");
        scanf("%d",&parcial1[num-1]);
        } while (parcial1[num-1] < 1 || parcial1[num-1] > 10);

        do {
        printf("\nIngrese la nota del segundo parcial\n");
        scanf("%d",&parcial2[num-1]);
        } while (parcial2[num-1] < 1 || parcial2[num-1] > 10);

        do {
            printf("\nIngrese el porcentaje de asistencias\n");
            scanf("%f",&asistencia[num-1]);
        } while (asistencia[num-1] < 0 || asistencia[num-1] > 100); 

        do {
        printf("\nIngrese el numero de alumno\n");
        scanf("%d",&num);
        } while (num < 1 || num > 90);

         do {
        printf("\nIngrese el DNI del alumno (0 para finalizar)\n");
        scanf("%d",&DNI[num-1]);
         } while (!((DNI[num -1] >= 1 && DNI[num -1] <= 90) || DNI[num -1]==0));

    }

    resultado(DNI, parcial1, parcial2); 
    attendance(DNI, asistencia);
    cuentita(DNI, parcial1, parcial2, asistencia);
    godSegundoParcial(DNI,parcial2);

}

void resultado(int DNI[], int parcial1[], int parcial2[]){
    for (int i = 0; i < 90; i++){
        if (DNI[i] != 0){

            if (parcial1[i] >= 7 && parcial2[i] >= 7){
                printf("\n el alumno %d promociono la materia!.\n", DNI[i]);
            } else if (parcial1[i] >= 4 && parcial2[i] >= 4){
                printf("\nEl alumno %d tiene que rendir el final\n", DNI[i]);
            } else if(parcial1[i]> 0 && parcial2[i] > 0){
                printf("\nEl alumno %d debe recuperar la materia\n", DNI[i]);
            } else {
                printf("\nEl alumno %d estuvo ausente en uno o dos parciales\n", DNI[i]);
            }
        }
    }
};


void attendance (int DNI[], float asistencia[]){
    for ( int i = 0; i < 90; i++){
        if (DNI[i] != 0){
            if(asistencia[i] < 75){
                printf ("\nEl alumno %d se quedo libre\n", DNI[i]);
            }
    }
    }
};

void cuentita (int DNI[], int parcial1[], int parcial2[],float asistencia[]){
    int total = 0;
    for(int i = 0; i < 90; i++){
        if (DNI[i] != 0){
            if ((parcial1[i] > 7 && parcial2[i] > 7) && asistencia[i] > 75){
                total++;
            }
        }
    }
    printf("\nEl total de alumnos que promocionan pero no cumplen la asistencia es %d\n", total);
};

void godSegundoParcial(int DNI[], int parcial2[]){
    for (int i = 0; i < 90; i++){
        if (DNI[i] != 0){
            if ( parcial2[i] == 10){
                printf("\n el alumno %d tiene un 10 en el segundo parcial\n", DNI[i]);
            }
        }
    }
}