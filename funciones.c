#include <stdio.h>

int sumar(int, int);

void imprimirVector(int[]);

int main(){
int hola = 4;
int adios = 4;

int vector1[3] = {0, 4 ,5};

    int llamado = sumar(hola, adios);
    int llamado2 = sumar(6, 8);

    llamado = llamado /2;
    printf("%d", llamado);

    printf("%d", llamado2);

    imprimirVector(vector1);



return 0;
}

int sumar (int a, int b){
int resultado = a + b;
return resultado;
};


void imprimirVector(int k[]){
    for (int i = 0; i <3; i++){
        printf("%d", k[i]);
    }
};