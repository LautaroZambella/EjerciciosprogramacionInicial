/*ingresar un número entero mayor a 0. Debe dibujar un triángulo rectángulo con * con tantas filas como
el número indicado. En cada fila se va incrementando la cantidad de asteriscos. Por ejemplo, si se ingresa el
número 6 debe mostrar en pantalla:

*
**
***
****
*****
******

*/
#include <stdio.h>

int main () {
    int n, i, j;

    printf("Ingresa un numero entero mayor a 0: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("El número ingresado no es valido.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
    

