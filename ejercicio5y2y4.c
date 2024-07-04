/*
    Un negocio de venta de granos desea controlar las ventas realizadas. De cada una ingresa el importe total
y un código que indica la forma de pago. El código puede ser:
• C: cheque, 20% de recargo.
• E: efectivo, 10% de descuento.
• T: con tarjeta, 12% de recargo.
Se debe ingresar una F para finalizar el día de venta y arrojar los siguientes totales.
Efectivo en Caja: $ xxxx.xx
Ventas con Tarjeta de Crédito: $ xxxx.xx
Ventas con cheque: $ xxxx.xx
Total de Venta: $ xxxx.xx
Importe del IVA: $ xxxx.xx
Nota: El IVA corresponde al 21% del total de ventas
*/

#include <stdio.h>

int main () {
     float importeActual, totalEfectivo, ventasTarjeta, ventasCheque, importeIVA, total;
     char codigo;

     ventasCheque = 0.0;
     ventasTarjeta = 0.0;

     do {
         printf("Ingrese el importe comprado");
         scanf("%f",&importeActual);
         printf("Ingrese el codigo de pago");
         fflush(stdin);
         scanf("%c",&codigo);

        if (codigo == 'c') {
            importeActual = 1.20*importeActual;
            ventasCheque++;
            total += importeActual;
        } else if (codigo == 'e') {
            importeActual = 0.90 * importeActual;
            totalEfectivo += importeActual;
            total += importeActual;
        } else if(codigo == 't') {
            importeActual = 1.12*importeActual;
            ventasTarjeta++;
            total += importeActual;
        } else {
            printf("Ingrese un codigo valido");
        }
        
     } while (codigo != 'f');


    importeIVA = total*0.21;

    printf("El efectivo en caja es %f \n", totalEfectivo);
    printf("se han realizado %f con tarjeta \n", ventasTarjeta);
    printf("se han realizado %f con cheque \n", ventasCheque);
    printf("El precio total es %f sin contar el IVA que es %f \n", total, importeIVA);


    return 0;
}