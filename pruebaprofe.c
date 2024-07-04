#include <stdio.h>
#include<ctype.h>

int main()
{
    int legajo,antiguedad, categoria;
    float sueldo;
    char sexo; int band=0;

    do{ if (band==0)
         band=1;
         else
        printf("Error\n");


    printf("Ingrese Legajo:");
    scanf("%d",&legajo);
    }while((legajo<1000 || legajo>5000) && legajo!=0);

    while(legajo!=0)
    {

      sueldo=0;

     do{

        printf("Sueldo:");
        scanf("%f",&sueldo);
        }while(sueldo<1000);

        do{
            printf("Antiguedad:");
            scanf("%d",&antiguedad);
            }while(antiguedad<0);

            do{
            printf("Sexo:");
            fflush(stdin);
            scanf("%c",&sexo);
            }while(sexo!='F' && sexo!='M');

        do{
            printf("Ingrese Categoria:");
            scanf("%d",&categoria);
            }while(categoria<1 || categoria>5);

        switch(categoria)
        {

        case 2:
        case 3:sueldo+=500;
            break;
        case 4:sueldo=sueldo*1.1;
            break;
        case 5:sueldo=sueldo*1.3;
            break;
            }
        if (antiguedad>10)
        {
            sueldo=sueldo*1.1;
        }
        printf("El sueldo a cobrar es %10.2f\n\n", sueldo);

            band=0;

            do{
            if (band==0)
                    band=1;
            else printf("Error-");
            printf("Ingrese Legajo:");
            scanf("%d",&legajo);
            }while((legajo<1000 || legajo>5000) && legajo!=0);

    }
return 0;}