// Se ingresan 50 números enteros. Determinar el promedio de los números pares

#include <stdio.h>

int main () {
    int i, j, suma;
    float promedioTotal;

    j = 0;
    promedioTotal = 0;

     for (i = 0; i < 5; i++) 
    {

        printf("%d", i);
         printf("Ingrese el siguiente numero");
         scanf("%d", &suma);

         if (suma % 2 == 0) {
             j++;
             promedioTotal += suma;

         }
    }

     printf("El promedio de los numeros es: %f", promedioTotal);
    return 0;
}