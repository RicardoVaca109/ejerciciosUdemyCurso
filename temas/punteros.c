#include <stdio.h>
/*Una variable capaz de guardar direcciones de memoria y podremosa acceder a
dicha información de memoria cuando queramos*/
int main (int argc, char *argv[]) {
    int numero = 6;
    int *punteroAnumero = &numero;
    //Se usa "&" para saber la dirección de memoria a la que apunta el puntero
    printf("la variable punteroAnumero contiene la direccion de memoria: %p\n",
                                        &numero);
    //Se usa "*" para saber el valor almacenado en la dirección del puntero
    printf("El valor de la variable situada en la direccion de memoria a la que apunta es: %d\n",
                                    *punteroAnumero);

    // usar punteros en un vector
    char cadena [30] = "esta es una cadena de prueba";
    char *chain = &cadena[0];

    for (int i = 0; i < 30; i++)
    {
        printf("%c ", *(chain+i));
    }

    //como recorrer un vector usando punteros
    printf("\n");
    int vectorint [5] = {1,2,3,4,5};
    int *punteroAvector = &vectorint[0];
    for (int i = 0; i < 5; i++)
    {
        printf("%d",*(vectorint+i));
    }
    
    //punteros a estructuras
    printf("\n");

    struct mi_register
    {
        int  num;
        char car;
    };

    struct mi_register r1;
    struct mi_register *point = &r1;
    (*point).num = 5;
    point->car= 'c';


    printf("El campo num de la estructura mi_registro a la que apunta point es:%d\n",
                    (*point).num);
    printf("El campo car de la estructura mi_registro es:%c\n", r1.car);
    
    
    {
        /* data */
    };
    
    
    



    return 0;
}