#include <stdio.h>

int main (int argc, char *argv[]) {

    int numero = 3;
    int numero2 = 7;
    int numero3 = 1;
    if (numero > 0 && numero2 > 0) //"&&" ambas condiciones deben ser verdaderas
    {   if (numero3 > 0)
    {
        printf("los 3 numeros son positivos\n");
    }
    
        //printf("Ambos numeros son positivos\n");
    }
    else if (numero > 0 || numero2 >0 )// " || " o una condicion o la otra es
    {                                  // verdadera
        printf("algun Numero es positivo\n");
    }
    else
    {
        printf("ningun numero es positivo\n");
    }
    printf("fin del programa");
    
    return 0;
}