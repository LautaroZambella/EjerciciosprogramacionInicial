#include <stdio.h>

int main () {

    int codigoIngresado;

    printf("Ingrese el numero de codigo que desea chequear\n");
    scanf("%d", & codigoIngresado);

    if (1200 < codigoIngresado && 90000 > codigoIngresado) {
        if ((codigoIngresado > 12121 && codigoIngresado < 18081) || (codigoIngresado > 30012 && codigoIngresado < 45565) || (codigoIngresado > 67000 && codigoIngresado < 68000)) {
            printf("Producto defectuoso");
        } else {
            printf("todo ok el producto");
        }
    } else {
        printf("FUERA DE CATALOGO");
    }
}