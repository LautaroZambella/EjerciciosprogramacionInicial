#include <stdio.h>

int primerLugar(float[]);
int peorLugar(float[]);
int cantMejorProm(float[]);
void noParticipan(float[]);

int main() {
    float tiempos[60] = {0};
    int num;

    do {
        printf("Ingrese el numero del vehiculo: ");
        scanf("%d", &num);
    } while (!(num >= 1 && num <= 60 || num < 0));

    while (num > 0) {
        do {
            printf("Ingrese el tiempo: ");
            scanf("%f", &tiempos[num - 1]);
        } while (!(tiempos[num - 1] > 0));

        do {
            printf("Ingrese el numero del vehiculo: ");
            scanf("%d", &num);
        } while (!(num >= 1 && num <= 60 || num < 0));
    }

    int primerPuesto = primerLugar(tiempos);
    printf("El mejor tiempo es del auto numero: %d\n", primerPuesto + 1);

    int ultimoPuesto = peorLugar(tiempos);
    printf("El peor tiempo es del auto numero: %d\n", ultimoPuesto + 1);

    int cantidad = cantMejorProm(tiempos);
    printf("La cantidad de autos mejor al promedio es %d\n", cantidad);

    noParticipan(tiempos);

    return 0;
}

int primerLugar(float tiempos[]) {
    float mejorTiempo = 1000000000;  // Inicializar con el mayor valor posible para float
    int duenoMejor = -1;

    for (int i = 0; i < 60; i++) {
        if (tiempos[i] > 0) {
            if (tiempos[i] < mejorTiempo) {
                mejorTiempo = tiempos[i];
                duenoMejor = i;
            }
        }
    }

    return duenoMejor;
}

int peorLugar(float tiempos[]) {
    float peorPuesto = -1;  // Inicializar con un valor menor que cualquier tiempo posible
    int duenoPeor = -1;

    for (int k = 0; k < 60; k++) {
        if (tiempos[k] > peorPuesto) {
            peorPuesto = tiempos[k];
            duenoPeor = k;
        }
    }
    return duenoPeor;
}

int cantMejorProm(float tiempos[]) {
    int contador = 0;
    float totalTiempo = 0;
    int devolver = 0;
    float promedio;

    for (int j = 0; j < 60; j++) {
        if (tiempos[j] > 0) {
            contador++;
            totalTiempo += tiempos[j];
        }
    }

    if (contador == 0) {
        return 0;  // Evitar división por cero si no hay tiempos
    }

    promedio = totalTiempo / contador;

    for (int l = 0; l < 60; l++) {
        if (tiempos[l] > promedio) {
            devolver++;
        }
    }
    return devolver;
}

void noParticipan(float tiempos[]) {
    for (int i = 0; i < 60; i++) {
        if (tiempos[i] == 0) {
            printf("Este auto no participo: %d\n", i + 1);
        }
    }
}
