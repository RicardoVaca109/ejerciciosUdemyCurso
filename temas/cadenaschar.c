#include <stdio.h>
//cadenas de caracteres en C se las trata como vectores de caracteres
int main (int argc, char *argv[]) {

    char cadena[100] ="Esto es un cadena";//cadenas ultimo caracter es "\0"
    char cadena2 [100] = "esto es cadena\0"; 
    char cadena3 [100] = {'e','s','t','o','e','s','\0'};
    
    for (int i = 0; i < 100; i++) //una manera para imprimir recorriendo toda
                                  // la cadena
    {
        printf("%c",cadena[i]);
    }

    // acceder a un caracter en concreto
    printf("\n");
    printf("%c\n", cadena3[3]);

    //modificar un elemento de una cadena
    cadena3[3] = 'A';
    printf("%c", cadena3[3]);

    //otra manera de imprimir cadenas con un printf
    printf("\n%s\n", cadena3);

    //Leer una cadena del usuario

    //printf ("Inroduzca primera  cadena\n");
    //primera opcion para leer una cadena es(problema con espacios):
    //scanf("%s",cadena3);
    //printf("%s\n",cadena3);
    //segunda opcion es con (lee espacios):
    printf ("Inroduzca segunda  cadena\n");
    gets(cadena);
    printf("%s\n",cadena);
   
    return 0;
}