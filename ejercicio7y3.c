#include <stdio.h>
#include <math.h>

void Ingreso1(float[]);
void sumaVectores(float[], float[], float[]);

int main () {
    float vector1[10] = {0};
    float vector2[10] = {0};
    float vector3[10] = {0};
    float vector4[10] = {0};

    int p = 0;
    Ingreso1(vector1);


    for (int i = 0; i < 10; i++){
        printf("El siguiente numero es: %.2f\n", vector1[i]);
        if (vector1[i] < 0){
            vector2[i] = 0;
        } else {
            vector2[i] = sqrt(vector1[i]);
        }
    }

    sumaVectores(vector1, vector2, vector3);

    for (int j = 0; j < 10; j++){
        printf("El vector 2 siguiente numero es: %.2f\n", vector2[j]);
        printf("El vector 3 siguiente numero es: %.2f\n", vector3[j]);
        
    }

    for (int k = 9; k > -1; k = k-1){
        vector4[p] = vector3[k];
        p++;
    }

    for (int g = 0; g < 10; g++){
        printf("El valor del 4to vector es %.2f\n", vector4[g]);
    }

    

}

void Ingreso1(float vector1[]) {

    for (int i = 0; i < 10; i++){
        printf("Ingreese el siguiente valor del vector\n");
        scanf("%f",&vector1[i]);
    }

};


void sumaVectores(float vector1[], float vector2[], float vector3[]){
    for (int i = 0; i < 10; i++){
        vector3[i] = vector1[i] + vector2[i];
    }

};