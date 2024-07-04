#include <stdio.h>

int chequear(int[], int[]);

int main() {
    int vector1[5] = {0,1,2,3,4};
    int vector2[5] = {0,1,3,3,4};

    int resultado = chequear(vector1,vector2);

    printf("EL resultado es %d", resultado);

}

int chequear(int vector1[], int vector2[]){
    for (int i = 0; i < 5; i++){
        if (vector1[i] != vector2[i]){
            return 0;
        }
    }

    return 1;
};