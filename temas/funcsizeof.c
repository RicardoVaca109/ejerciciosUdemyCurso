#include <stdio.h>
#include <stdlib.h>
// funcion que nos permite saber cuanto ocupa un determinado tipo de dato
int main (int argc, char *argv[]) 
{
    //sizeof
    int n_int =  sizeof(int);
    int n_char = sizeof(char);
    int n_long = sizeof(long);


    struct estructura
    {
        int entero;
        char caracteres [10];
    };
    
    int n_struct = sizeof(struct estructura);

    float vector[5];
    int n_vector =sizeof(vector);
    printf("Tamano de un entero = %d \n", n_int);
    printf("Tamano de un char = %d \n", n_char);
    printf("Tamano de un char = %d \n", n_long);
    printf("Tamano de un struct = %d \n", n_struct);
    printf("Tamano de un vector float = %d \n", n_vector);


    
    return 0;
}