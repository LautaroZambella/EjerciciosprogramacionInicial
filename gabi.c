#include <stdio.h>
int main()
{
    int vector1[5] = {2, 4, 6, 8, 10};
    int vector2 [5] = {1, 3 ,5, 7, 9};
    int vectorfinal[10] = {0};


        for (int i = 0; i < 5; i++){
            printf("\nEl valor es %d\n", vector1[i]/2);
        }


        vector1[3] = 456;

        for (int i = 0; i < 5; i++){
            printf("\nEl valor es %d\n", vector1[i]);
        }











    // for(int i = 0; i < 10 ; i++)
    // {
    //     if(i % 2 == 0)
    //     {
    //         vectorfinal[i] = vector2 [i/2];
    //     }
    //     else
    //     {
    //         vectorfinal[i] = vector1[i/2];
    //     }
    // }

    //     for(int m = 0 ;m <10; m++)
    //     {
    //         printf("El vector en la posicion %d vale: %d \n", m, vectorfinal[m]);
    //     }

    }