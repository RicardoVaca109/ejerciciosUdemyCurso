#include <stdio.h>

int main (int argc, char *argv[]) {

    // vectores o arrays conjuntos de datos del mimso tipo almacenados en memor-
    //ia bajo un mismo nombre
    //int vector [10]; //vector de 10 elementos

    int vector [10] = {0,1,2,3,4,5,6,7,8,9};
    printf("%d \n",vector[3]);

    vector [9] = 100; //cambiar el valor de alguna posición del vector
    vector [5] = 500;
    
    for ( int i = 0; i < 10; i++) //redcorrer el vector
    {
        printf("%d\n",vector[i]);
        //printf("Este es el número %d\n",vector);
    }
    

    return 0;
}