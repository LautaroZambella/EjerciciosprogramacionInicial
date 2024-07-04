#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// Función para limpiar el buffer de entrada
void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int diaEncuestado, mesEncuestado, anoEncuestado, cantEscuelas, numEscuela, cantAlumnos;
    int dni, diaNacer, mesNacer, anoNacer, cantNoTecnicos = 0;
    int mayorEdad = 0, mayorDni = 0, mayorBuenaOpinion = 0;
    int i, cantRespuestas, porcentajeRespuestas;

    char especialidad, sexo, opinion;

    printf("Ingrese el dia: \n");
    scanf("%d", &diaEncuestado);
    printf("Ingrese el mes: \n");
    scanf("%d", &mesEncuestado);
    printf("Ingrese el anio: \n");
    scanf("%d", &anoEncuestado);

    printf("Ingrese la cantidad de escuelas encuestadas: \n");
    scanf("%d", &cantEscuelas);

    for (i = 0; i < cantEscuelas; i++) {  // Cambiado a i < cantEscuelas
        cantRespuestas = 0;

        printf("Ingrese el nro. de escuela: \n");
        scanf("%d", &numEscuela);
        printf("Ingrese la cant alumnos: \n");
        scanf("%d", &cantAlumnos);
        printf("Ingrese si la escuela es tecnica ('T') o no tecnica ('N'): \n");
        limpiarBuffer();
        scanf("%c", &especialidad);
        especialidad = toupper(especialidad);

        while (especialidad != 'T' && especialidad != 'N') {
            printf("Entrada invalida. Ingrese 'T' para tecnica o 'N' para no tecnica: \n");
            limpiarBuffer();
            scanf("%c", &especialidad);
            especialidad = toupper(especialidad);
        }

        do {
            printf("Ingrese el dni del estudiante (0 para terminar): \n");
            scanf("%d", &dni);

            if (dni == 0) break;

            while ((dni < 1000000 || dni > 99999999) && dni != 0) {
                printf("DNI invalido. Ingrese nuevamente (0 para terminar): \n");
                scanf("%d", &dni);
                if (dni == 0) break;
            }

            if (dni == 0) break;

            printf("Ingrese el dia de nacimiento: \n");
            scanf("%d", &diaNacer);
            printf("Ingrese el mes de nacimiento: \n");
            scanf("%d", &mesNacer);
            printf("Ingrese el anio de nacimiento: \n");
            scanf("%d", &anoNacer);

            printf("Ingrese su sexo ('M' o 'F'): \n");
            limpiarBuffer();
            scanf("%c", &sexo);
            sexo = toupper(sexo);

            while (sexo != 'M' && sexo != 'F') {
                printf("Entrada invalida. Ingrese 'M' para masculino o 'F' para femenino: \n");
                limpiarBuffer();
                scanf("%c", &sexo);
                sexo = toupper(sexo);
            }

            printf("Ingrese su opinion ('B' para buenos, 'M' para malos): \n");
            limpiarBuffer();
            scanf("%c", &opinion);
            opinion = toupper(opinion);

            while (opinion != 'B' && opinion != 'M') {
                printf("Entrada invalida. Ingrese 'B' para buenos o 'M' para malos: \n");
                limpiarBuffer();
                scanf("%c", &opinion);
                opinion = toupper(opinion);
            }

            printf("El estudiante de DNI %d que nacio en el anio %d es %c y opina que los conocimientos son %c\n", dni, anoNacer, sexo, opinion);
            cantRespuestas++;
        } while (dni != 0);

        porcentajeRespuestas = (100 * cantRespuestas) / cantAlumnos;
        printf("El porcentaje que respondio la encuesta es de %d%%\n", porcentajeRespuestas);

        if (especialidad == 'N') {
            cantNoTecnicos += cantRespuestas;
        }
    }

    // Imprimir los resultados globales
    printf("Cantidad de estudiantes de colegio no tecnicos que respondieron la encuesta: %d\n", cantNoTecnicos);
    // Otros resultados globales se pueden calcular y mostrar aquí

    return 0;
}
