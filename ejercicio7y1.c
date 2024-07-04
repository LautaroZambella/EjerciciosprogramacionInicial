#include <stdio.h>

void regueiro(int[], int[]);

int main () {
int vector1[] = {78, 54, 34, 100, 1};
int vector2[] = {19, 87, 64, 23, 9};


    regueiro(vector1, vector2);

}

void regueiro(int vector1[], int vector2[]) {
    int vectorFinal[] = {0};
    
    for(int i = 0; i <5; i++){
        vectorFinal[i] = vector1[i];
    }

    for (int j = 0; j <5; j++){
        vectorFinal[j+5] = vector2[j];
    }

    for (int k = 0; k < 10; k++) {
        printf("El siguiente numero es %d\n", vectorFinal[k]);
    }

};