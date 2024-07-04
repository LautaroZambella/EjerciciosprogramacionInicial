// 7.6 Se ingresan DNI, código de sector (1 a 5) y sueldo de los empleados de una empresa. Se sabe que como
// máximo la empresa tiene 100 empleados. Se desea:
// a. Cargar los datos de los empleados mediante la función CargaEmpleados. La carga finaliza con un
// empleado con DNI 99.
// b. Generar un vector con la cantidad de empleados en cada sector mediante la función
// CuentaPorSector y mostrarlo en forma de listado.
// c. Determinar el importe total a pagar de sueldos mediante la función TotalAPagar.

#include <stdio.h>

void CargaEmpleados();
void CuentaPorSector(int[]);
void TotalAPagar(float[]);

int main (){
    CargaEmpleados();
}

void CargaEmpleados (){
    int DNI[100] = {0};
    int sector[100] = {0};
    float sueldo[100] = {0};

    int codigo;

    do {
        printf("\nIngrese el num de empleado que del que quiera cargar datos\n");
        scanf("%d",&codigo);
    } while (codigo < 1 || codigo > 100);

    do {
        printf("\nIngrese el DNI del empleado numero %d\n", codigo);
        scanf("%d",&DNI[codigo-1]);
    } while ((DNI[codigo-1] < 1 || DNI[codigo-1] > 99999999) && DNI[codigo-1] != 99);

    while(DNI[codigo-1] != 99){
        do {
            printf("\nIngrese el sector del empleado\n");
            scanf("%d",&sector[codigo-1]);
        } while (sector[codigo-1]<1 || sector[codigo-1]>5);

        do {
            printf("\nIngrese el sueldo del empleado\n");
            scanf("%f",&sueldo[codigo-1]);
        } while(sueldo[codigo-1] < 0);

        do {
        printf("\nIngrese el num de empleado que del que quiera cargar datos\n");
        scanf("%d",&codigo);
    } while (codigo < 1 || codigo > 100);

    do {
        printf("\nIngrese el DNI del empleado numero %d\n", codigo);
        scanf("%d",&DNI[codigo-1]);
    } while ((DNI[codigo-1] < 1 || DNI[codigo-1] > 99999999) && DNI[codigo-1] != 99);
    }

    CuentaPorSector(sector);
    TotalAPagar(sueldo);

}

void CuentaPorSector (int sector[]){
    int cantidadPorSector[5] = {0};

    for (int i = 0; i < 100; i++){
        if(sector[i] != 0){
            cantidadPorSector[sector[i]-1]++;
        }
    }

    for (int k = 0; k <5; k++){
        printf("\nEn el sector %d hay %d empleados\n",k +1, cantidadPorSector[k]);
    }
};

void TotalAPagar(float sueldo[]){
    float acu = 0;

    for (int j = 0; j < 100; j++){
        acu += sueldo[j];
        printf("\n El sueldo del empleado %i es de %f", j+1, sueldo[j]);
    }
    printf("El total a pagar de la empresa es %.2f", acu);
};