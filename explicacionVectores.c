#include <stdio.h>

int main() {
    int vector1[] = {3, 4 ,8 , 45};

    int vector2[5] = {0};

    int indice = 0;

    int vector3[5] = {0};

    for (int i = 0; i < 4; i++){
        printf("El siguiente numero es: %d con el valor de i: %d\n", vector1[i], i);
        if (vector1[i] > 7){
            printf("ES MAYOR A DIEZ");
        }
    }
    // printf("Ingrese el inidice deseado");
    // scanf("%d",&indice);


    // printf("Ingrese el valor: \n");
    // scanf("%d",&vector2[indice-1]);


    // printf("El valor en la posicion es: %d\n", vector2[indice]);


    // printf(" el vector tiene este numero en la posicion 2: %d", vector2[4]);

    for(int j = 0; j < 5; j++){
        printf("ingrese el sig. valor: \n");
        scanf("%d",&vector3[j]);
    }

    for (int k = 0; k < 5; k++){
        printf("El valor en la posicion %d es: %d", k +1, vector3[k]);
    }

}