#include <stdio.h>
/*Escribir un programa que pida 4 cadenas por teclado y las muestre por la 
alida separadas por un "-"*/

int main (int argc, char *argv[]) {
    char cadena[50], cadena1[50], cadena2[50], cadena3[50];

    printf("Introduce la cadena 1\n");
    gets(cadena);
    printf("Introduce la cadena 2\n");
    gets(cadena1);
    printf("Introduce la cadena 3\n");
    gets(cadena2);
    printf("Introduce la cadena 4\n");
    gets(cadena3);

    printf("%s-%s-%s-%s",cadena,cadena1,cadena2,cadena3);
    return 0;
}