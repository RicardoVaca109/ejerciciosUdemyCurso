#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    //Escribir un programa que pida al usuario 3 caracteres y los muestre en 
    //consola separado po guiones

    char c1,c2,c3;
    printf("Usuario ingrese 3 caracteres:\n");
    scanf("%c %c %c", &c1,&c2,&c3);
    printf("Los caracteres ingresados son: %c - %c - %c\n", c1,c2,c3);
    return 0;
}