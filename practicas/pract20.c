#include <stdio.h>
#include <stdlib.h>
/*Escribir un programa que lea un fichero llamado numeros.txt que contiene
una lista de numeros uno en cada fila y devuelva la sumad e dichos numeros
*/
int main (int argc, char *argv[]) {
    FILE *f;
    f = fopen("numerospractwenty.txt","r");
    int suma = 0,numero;

    while (feof(f) == 0)
    {
        fscanf(f,"%d", &numero);
        suma = suma + numero;

    }
    printf("La suma de todos los numeros del fichero es: %d\n",suma);
    fclose(f);     
    
    return 0;
}