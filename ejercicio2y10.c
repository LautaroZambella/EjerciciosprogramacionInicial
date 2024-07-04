#include <stdio.h>

int main () {
    float radio, superficie, perimetro, volumen;
    printf("Ingrese el valor del radio del circulo:");
    scanf("%f", &radio);

    superficie = ((radio*1.0)*radio)*3.14;
    perimetro = 2*3.14*radio;
    volumen = (4/3)*3.14*(radio*radio*radio);

    printf("El valor de la superficie es: %f, el del perim es: %f, y el volumen es: %f", superficie, perimetro, volumen);
}