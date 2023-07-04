#include <stdio.h>
/*Escribir un programa que dado  un vector de enteros de 10 elementos, muestre 
el valor máximo y mínimo*/

int main (int argc, char *argv[]) {
     int numeros [10] = {4,7,4,3,9,6,3,12,2,-3};
     int  valor_max = numeros[0];
     int valor_min = numeros [0];

     for (int i = 1; i < 10; i++)
    //se pone i=1 ya que las variables de arriba consideramos que sean el primer
    //valor del vector no tiene sentido volver a recorrerlo 
     {
        if (numeros [i] > valor_max)
        {
            valor_max = numeros[i];
        }

        if (numeros [i] < valor_min)
        {
            valor_min  = numeros[i];
        }
     }

     printf("Del vector el valor max es: %d\n y el valor min es: %d",valor_max,valor_min);
     

    return 0;
}