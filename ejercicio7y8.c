/*
7.8 Para una carrera de automóviles, se toman los tiempos de clasificación (real, mayor que 0 en segundos) de
como máximo 60 autos de carrera inscriptos para la competencia.
Los autos se identifican con números correlativos del 1 al 60, quedando sin información aquellos que no
participan de la presente carrera.
Cuando ya no hay más tiempos de clasificación para cargar, se ingresa un auto con número negativo.
Se solicita determinar:
a. El número de auto que clasificó en primer lugar.
b. El número de auto que obtuvo el peor tiempo de clasificación.
c. La cantidad de autos que superaron el promedio de tiempo de clasificación.
d. El o los números de autos que no participan de la carrera actual.
*/

#include <stdio.h>


char calculo(int);
int primerLugar (float[]);
int peorLugar (float[]);
int cantMejorProm(float[]);
void noParticipan(float[]);

int main () {
    float tiempos[60] = {0};
    int num;

    do {
        printf("Ingrese el numero del vehiculo");
        scanf("%d",&num);
    } while(!(num>=1&&num<=60 || num<0));

    while ( num > 0){
        do {
            printf("Ingrese el tiempo\n");
            scanf("%f",&tiempos[num - 1]);
        } while ( !(tiempos[num - 1] >0)  );

        do {
        printf("Ingrese el numero del vehiculo");
        scanf("%d",&num);
    } while(!(num>=1&&num<=60 || num<0));
    }

    int primerPuesto = primerLugar(tiempos);
    printf("El mejor tiempo es del auto numero: %d con un tiempo de %f\n", primerPuesto +1, tiempos[primerPuesto]);

    int ultimoPuesto = peorLugar(tiempos);
    printf("El peor tiempo es del auto numero: %d\n", ultimoPuesto +1);

    int cantidad = cantMejorProm(tiempos);
    printf("La cantidad de autos mejor al promedio es %d\n", cantidad);

    noParticipan(tiempos);

}

int primerLugar(float tiempos[]) {
    float mejorTiempo = 10000000;
    int duenoMejor = -1;

    for (int i = 0; i< 60; i++){
        if (tiempos[i] > 0){
        if (tiempos[i] < mejorTiempo){
            mejorTiempo = tiempos[i];
            duenoMejor = i;
         }
        }
    }

    return duenoMejor;
};

int peorLugar (float tiempos[]) {
    float peorPuesto = -1;
    int duenoPeor = -1;

    for (int k = 0; k < 60; k++){
        if (tiempos[k] > peorPuesto){
         peorPuesto = tiempos[k];
         duenoPeor = k;  
        }
    }
    return duenoPeor;
};

int cantMejorProm(float tiempos[]) {
    int contador = 0;
    float totalTeimpo = 0;
    int devolver = 0;
    float  promedios;
    for (int j = 0; j <60; j++){
        if (tiempos[j] > 0){
            contador++;
            totalTeimpo += tiempos[j];
        }
    }

    if (contador == 0){
        return 0;
    }

    promedios = totalTeimpo/contador;

    for (int l = 0; l < 60; l++) {
        if (tiempos[l] > promedios) {
            devolver++;
        }
    }
    return devolver;
};

void noParticipan(float tiempos[]) {
    for (int i = 0; i <60; i++){
        if(tiempos[i] == 0) {
            printf("Este auto no participo: %d\n", i + 1);
        }
    }
}