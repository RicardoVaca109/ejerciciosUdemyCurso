#include <stdio.h>

#define nombre 3 //usamos define para constantes
#define pi 3.14 

int main (int argc, char *argv[]) {
    //Constantentes en C (datos que mantiene los valores en todo el programa)
    //printf("%d\n",nombre);
    //printf("%.2f esto es Pi\n",pi);
    float radio, resultado;
    printf("Usuario ingrese el radio de un circulo:\n");
    scanf("%f",&radio);
    resultado = radio*radio*pi;
    printf("El area del ciculo es:\n %f", resultado);
    return 0;
}