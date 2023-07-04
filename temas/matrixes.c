#include <stdio.h>
#include <stdlib.h>
//vectores de dos dimensiones, bidimensional o matrices
int main (int argc, char *argv[]) {
    int m [3][2] = {{0,1},{2,3},{4,5}};  
    //primer numero dentro de corchetes es número de filas y el otro de columnas
    //printf("%d\n", m [1][1]);

    m [2][0] = 45;
    //printf("%d\n", m [2][0]);
    
    //recorrer los datos de una matriz con bucles requerimos de 2 bucles for
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",m[i][j]); //el espacio en el "%d " es importante
        }
        printf("\n");
        
    }
    
    return 0;
}