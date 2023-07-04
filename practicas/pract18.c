#include <stdio.h>

/*Escribri una función que reciba como parámetros un vector de enteros(por ref
erencia) y la longitud del vector y un número(por valor)
La función debe multiplciar cada elemento del vector por el número*/

void multiplicarvector(int *vector, int nElemen, int numero);
int main (int argc, char *argv[]) {
    int vector[10]={1,2,3,4,5,6,7,8,9,10};
    multiplicarvector(&vector[0],10,3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d ",vector[i]);
    }
    
    return 0;
}

void multiplicarvector(int *vector, int nElemen, int numero){
    for (int i = 0; i < nElemen; i++)
    {
        *(vector+i) = *(vector+i) * numero;

    }
    
}