#include <stdio.h>

int main () {
    int fechaIngresada, aos, mes, dias, fechaDevuelta;

    printf("Ingrese la fecha que quiera convertir");
    scanf("%d", & fechaIngresada);

    aos = fechaIngresada % 100;
    mes = (fechaIngresada / 100 ) % 100;
    dias = fechaIngresada / 10000;
    
    printf("el ano es: %d del mes: %d y el dia: %d",aos,mes,dias);

}