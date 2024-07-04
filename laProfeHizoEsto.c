/*7.6 Se ingresan DNI, código de sector (1 a 5) y sueldo de los empleados de una empresa. Se sabe que como

máximo la empresa tiene 100 empleados. Se desea:

a.

Cargar los datos de los empleados mediante la función CargaEmpleados. La carga finaliza con un

empleado con DNI 99.

b. Generar un vector con la cantidad de empleados en cada sector mediante la función

CuentaPorSector y mostrarlo en forma de listado.

c.

Determinar el importe total a pagar de sueldos mediante la función TotalAPagar. */

#include<stdio.h>

#include<ctype.h>

void CargaEmpleados(int[],float[],int);

void CuentaPorSector(int [],int);

float TotalAPagar(float[],int);

int main ()

{

int dni[100]={0},sector[5]={0},sueldo[100]={0};

CargaEmpleados(dni,sueldo,100);


return(0);

}

void CargaEmpleados(int dni[],float sueldo[],int cant_empl)

{

int pos,i=0,sector[5]={0},num=0; float suma;

printf("ingrese dni del empleado %d: ",i+1);

    scanf("%d",&num);

   while(i<cant_empl && num!=99)

    {

    dni[i]=num;

    CuentaPorSector(sector,5);

    printf("\ningrese sueldo del empleado %d: ",i+1);

    scanf("%f",&sueldo[i]);

    i++;

        printf("ingrese dni del empleado %d: ",i+1);

         scanf("%d",&num);

     }

suma=TotalAPagar(sueldo,i);

printf(" El sueldo total es %.2f",suma);

}

void CuentaPorSector(int vec[],int num)

{

    int i=0,sec;

    do

    {

    printf("ingrese sector: ");

    scanf("%d",&sec);

    } while ( sec < 1 || sec > 5);


    vec[sec-1]++;


       for(i;i<num;i++)

       {

           printf("\n\tsector %d ",i+1);

           printf("\n\t%d",vec[i]);

       }

}

float TotalAPagar(float vec[],int total)

{

    int i,suma=0;

    for(i=0;i<=total;i++)

    {

        suma+=vec[i];

    }

    return(suma);

}

 