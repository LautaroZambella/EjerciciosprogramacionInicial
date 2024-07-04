#include <stdio.h>

int main () {
    int codigoIngresado,  cantidad;
    float precio;

    printf("Ingrese la cantidad a comprar");
    scanf("%d", &cantidad);

    printf("\n Ingrese el codigo del arituclo");
    scanf("%d", &codigoIngresado);

    switch (codigoIngresado) {
        case 1:
        case 10:
        case 100:
            precio = cantidad * 10;
            break;
        case 2:
        case 22:
        case 222:
            precio = (cantidad/10) * 65 + (cantidad % 10) * 7;
            break;
        case 3:
        case 33:
            if (cantidad <= 10) {
                precio = cantidad * 3;
            } else {
                precio = (cantidad * 3) * 0.90;
            }
            break;
        case 4:
        case 44:
            precio = cantidad;
            break;
        default :
            printf("Codigo ingresado incorrecto");
    }

    printf("el articulo: %d, cantidad: %d, y se paga: %.2f", codigoIngresado, cantidad, precio);




}