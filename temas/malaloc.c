#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
    //malloc

    int *vector,n;
    printf("Introduza el numero de enteros del vector\n");
    scanf("%d", &n);

    //vector = malloc(n*sizeof(int));
    vector = calloc(n,sizeof(int));

    if (vector == NULL)
    {
        printf("Error al intentar reservar la memoria\n");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            //printf("Elemento en la posicion %d es %d\n",i,vector[i]);
            vector[i] = i;
        }
        
    }

    int n2 = n + 3;
    //realloc
    int *vector2  =realloc(vector,n2);

    if (vector2 == NULL)
    {
        printf("Error al intentar reservar la memoria\n");
    }
    else
    {
        vector = vector2;
    }
    for (int i = 0; i < n2; i++)
    {
        printf("%d\n",vector[i]);
    }
    
    //free espacio de memoria en desuso
    free(vector);//usar de nuevo un vector liberado es medio peligroso
    vector = NULL; //para volver a usar el vector le damos el valor de NULL(buena práctica)


    


    

    /*int *puntero;
    //int vector[10]; //vector estático
    puntero = malloc(4*sizeof(int));*/

    return 0;
}