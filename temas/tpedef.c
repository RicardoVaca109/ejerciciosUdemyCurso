#include <stdio.h>

int main (int argc, char *argv[]) {

    int valor;
    typedef int entero; //typedef crea sinonimos de datos primitivos

    entero valor1;
    entero valor2;


    typedef long entero_long;
    entero_long valor3;
    entero_long valor4;

    //tipo de dato "Semana que podra tener cualquiera de esos valores"
    typedef enum {lunes, martes, miercoles, jueves, 
                    viernes, sabado, domingo} semana; 
    // los de las llaves son los posibles valores que tiene el tipo de dato
    //semana. Tambien cada valor dentro de las llaves tiene un valor numerico 
    //desde 0
    semana dia_semana1 = lunes;

    if (dia_semana1 == lunes)
    {
        printf("Estamos en Lunes\n");
    }
    else
    {
        printf("No es lunes\n");
    }
    if (dia_semana1 == 0)
    {
        printf("Estamos en Lunes\n");
    }
    else
    {
        printf("No es lunes\n");
    }
    

    
    return 0;
}