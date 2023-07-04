#include <stdio.h>
/*Escribir un programa que pida  un número entero entre 1 y 10 y que guarde
en un ficehor de texto de nombre tabla.txt la tabla de ese número*/
int main (int argc, char *argv[]) {
    int numero;
    printf("Introduzca un numero del 1 al 10:\n");
    scanf("%d",&numero); 

    FILE *f;
    f  = fopen("tablaprac19.txt","w");
    for (int i = 0; i <= 10; i++)
    {
        fprintf(f,"%d\n",i* numero);
    }
    fclose(f);
    
    return 0;
}