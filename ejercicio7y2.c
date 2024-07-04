#include <stdio.h>

void ruidito(int[], int[]);

int main () {
    int vector1[5] = { 1, 43, 57, 34, 53}; // indices impares
    int vector2[5] = {98, 46, 72, 54, 78}; // indices pares

    ruidito(vector1, vector2);
}

void ruidito(int vector1[], int vector2[]) {

    int vectorFinal[10] = {0};

    for (int i = 0; i < 10; i++){
        if (i % 2 == 0){
            vectorFinal[i] = vector2[i/2]; 

        } else {
            vectorFinal[i] = vector1[i/2];
        }
    }

    for (int j = 0; j < 10; j++)
    {
        printf("El siguiente numero es %d\n", vectorFinal[j]);
    }
    
};