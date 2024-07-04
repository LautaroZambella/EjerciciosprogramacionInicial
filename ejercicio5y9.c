/*
Confeccionar un programa que exhiba por pantalla una lista, a dos columnas, con los primeros 15 números
impares en la primera y los 15 primeros pares en la segunda, incluyendo los títulos.
*/

#include <stdio.h>

int main () {
    int i;
    printf("Impares \t Pares \n");

    for (i = 1; i <= 30; i++) {
        if (i % 2 == 0) {
            printf("\t %d\n", i);
        } else {
            printf("%d\t", i);
        }
    }
    return 0;
}