/*
5.2.15 El gobierno de la Ciudad de Buenos Aires realiza una encuesta a los estudiantes de los colegios
secundarios. Los primeros datos a ingresar son la fecha (día, mes y año) y la cantidad de colegios de la ciudad
en que se realizó la encuesta.
De cada colegio se conoce: número de escuela, la cantidad de alumnos inscriptos y la especialidad (‘T’:
técnico, ‘N’: no técnico).
De cada alumno del colegio que respondió la encuesta se conoce: DNI, fecha de nacimiento (día, mes y
año), sexo (‘M’ o ‘F’), opinión con respecto a los conocimientos adquiridos (‘B’: buenos, ‘M’: malos). Se
identifica el fin de ingreso de datos de los alumnos que respondieron la encuesta por cada colegio con
ingreso 0 en el DNI del estudiante.
Validar todos los datos que se ingresan por teclado.
Informar:
a. Por cada colegio, el porcentaje de alumnos que contestaron la encuesta sobre la cantidad de
alumnos inscriptos del colegio.
b. Cantidad de estudiantes de colegio no técnicos que respondieron la encuesta.
c. Porcentaje de mujeres de escuelas técnicas sobre la cantidad de estudiantes que respondieron
la encuesta.
d. Porcentaje de estudiantes que respondieron que los conocimientos adquiridos eran malos,
sobre el total de encuestados.
e. Mayor edad de los estudiantes encuestados.
f. Número del colegio con mayor opinión buena sobre los conocimientos adquiridos.
*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main () {
    int diaEncuestado, mesEncuestado, anoEncuestado, cantEscuelas, numEscuela, cantAlumnos, dni, diaNacer, mesNacer, anoNacer, mayorEdad, mayorDni, mayorBuenaOpinion, i, cantrespuestas, porcentajeRespuestas, cantNoTecnicos, numMayoropinion, respuestasBuenas, porcentajeBuenas;

    char especialidad, sexo, opinion;

    cantrespuestas = 0;
    cantNoTecnicos = 0;
    mayorBuenaOpinion = 0;
    respuestasBuenas = 0;

    printf("ingrese el dia: \n");
    scanf("%d",&diaEncuestado);
    printf("Ingrese el mes\n");
    scanf("%d",&mesEncuestado);
    printf("Ingrese el anio: \n");
    scanf("%d",&anoEncuestado);

    printf("Ingrese la cantidad de escuelas encuestadas: \n");
    scanf("%d",&cantEscuelas);

    for (i = 0; i <= cantEscuelas -1; i++) {
        cantrespuestas = 0;
        do {
            printf("Ingrese el nro. de escuela: \n");
            scanf("%d",&numEscuela);
            printf("Ingrese la cant alumnos: \n");
            scanf("%d",&cantAlumnos);
            printf("Ingrese si la escuela es tecnica o no: \n");
            fflush(stdin);
            scanf("%c",&especialidad);
            especialidad = toupper(especialidad);
            fflush(stdin);
        }   while (numEscuela != 0 && (especialidad != 'T' && especialidad != 'N'));

        do {
            printf("Ingrese el dni del estudiante1: \n");
            scanf("%d",&dni);

        } while (( dni <1000000 || dni>99999999) && dni!=0);

        while (dni != 0) {

            do {
                printf("ingrese el dia cumple: \n");
                scanf("%d",&diaNacer);
                printf("Ingrese el mescumple: \n");
                scanf("%d",&mesNacer);
                printf("Ingrese el anio cumple: \n");
                scanf("%d",&anoNacer);
            }while (diaNacer == 0 && mesNacer == 0 && anoNacer == 0);

            do {
                printf("Ingrese su sexo: \n");
                fflush(stdin);
                scanf("%c",&sexo);

                sexo = toupper(sexo);
                fflush(stdin);

            } while (sexo != 'M' && sexo != 'F');

            do {
                printf("Ingrese su opinion: \n");
                fflush(stdin);
                scanf("%c",&opinion);

                opinion = toupper(opinion);
                fflush(stdin);

            } while (opinion != 'M' && opinion != 'B');
            cantrespuestas++;

            do {
            printf("Ingrese el dni del estudiante2: \n");
            scanf("%d",&dni);

            if (especialidad == 'N') {
                cantNoTecnicos++;
            }

            if (opinion == 'B') {
                respuestasBuenas++;
            }

        } while (( dni <1000000 || dni>99999999) && dni!=0);

        


        printf ("el estudiante de dni %d que nacio en el anioo %d es %c y opina que los conocimientos son %c\n", dni, anoNacer, sexo, opinion);
        
        
        } 
        porcentajeRespuestas = (100*cantrespuestas)/cantAlumnos;
        printf("El porcentaje que respondio la encuesta es de %d\n", porcentajeRespuestas);

        porcentajeBuenas = (100*respuestasBuenas)/porcentajeRespuestas;
        

        printf("la cantidad de personas de escuelas no tecinacas que respondieron es: %d\n",cantNoTecnicos);

        if (porcentajeBuenas > mayorBuenaOpinion) {
            mayorBuenaOpinion = porcentajeBuenas;
            numMayoropinion = numEscuela;
        }


    }

    printf("El colegio con mejor opinion positiva es: %d y tiene una opinion de %d\n", numMayoropinion, mayorBuenaOpinion);
}
