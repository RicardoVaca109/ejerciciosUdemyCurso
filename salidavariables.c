#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
    //printf("texto");
    int numero = 6; //definiendovariable con un valor variable int
    int numero2 = 10;
    printf("El contenido de la varibales numero y numero 2 son: %d y %d \n", 
    numero ,numero2);

    float numeroreal = 7.8; //variable float
    printf("El contenido de la variable numeroreal: %f\n", numeroreal);//%.f para mostrar con muchos decimales
    printf("El contenido de la variable numeroreal: %.2f\n", numeroreal);//%.(cantidad de decimales a imprimirse)f 
    
    double numerorealdouble = 800.87899; //variable double
    printf("El contenido de la variable numerorealdouble: %lf\n", numerorealdouble);
    printf("El contenido de la variable numerorealdouble: %.2lf\n", numerorealdouble);

    char caracter = 'L';
    printf("El contenido de la variable caracter: %c\n", caracter);

    return 0;
}