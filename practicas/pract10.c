#include <stdio.h>
/*Desarrolla un programa que solicite constantemente la carga de un número
al ususario. El programa finalizará cuendo el ususario ingrese un 0, momento
en el que se debe vizualizar  la suma y el promedio de todos los números
introducidos*/
int main(int argc, char *argv[])
{

    int suma = 0, contador = 0, num = -1;

    while (num != 0)
    {
        printf("Introduzca un numero \n");
        scanf("%d", &num);
        contador++;
        suma += num;
    }
    float promedio = suma / contador;
    printf("La suma de todos los numeros es %d y el promedio es %2.f\n",suma
            , promedio);

    return 0;
}