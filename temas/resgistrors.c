#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// se hablará sobre registros o tmb llamados estructuras(guardar diferentes
// valores de diferentes datos)
int main (int argc, char *argv[]) {
    //declarar un registro
    struct mi_resgistro
    {
        int dato_entero;
        float dato_float;
        char dato_cadena[30];
        int dato_vector [10];
    };

    struct mi_resgistro variable;
    variable.dato_entero = 100;
    variable.dato_float = 5.5;
    strcpy(variable.dato_cadena, "nueva cadena");
    variable.dato_vector[0]=4;


    printf("el dato de tipo float de mi registro es %f\n",variable.dato_float);

    //crear un vector con ese registro
    struct mi_resgistro vector [10]; 

    vector[0].dato_entero = 7;
    printf("el dato de tipo entero del elemento del vector es %d",
                                            vector[0].dato_entero);
    

    return 0;
}