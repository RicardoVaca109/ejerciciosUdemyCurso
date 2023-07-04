#include <stdio.h>
//resgistros anidados
int main (int argc, char *argv[]) {

    struct tipo1
    {
        int entero1;
        char caracter1;
    };

    struct tipo2
    {
       float real1;
       struct tipo1 variable1;
    };
    
    struct tipo2 variable2 = {7.8,{7,'t'}};//una manera ed inicializar
    printf("%d\n",variable2.variable1.entero1);
    printf("%f\n",variable2.real1);
    printf("%c\n", variable2.variable1.caracter1);

    /*otras maneras de inciializar valores anidados
    variable2.real1 = 7.8;
    variable2.variable1.entero1 = 7;*/
    return 0;
}