#include <stdio.h>
#include <stdlib.h>
/* Declarar  un registro llamado productop con los siguientes campos
-código tipo entero
-descripcion de tipo vector de caracteres
-precio de tipo real

De ahi definir un puntero de tipo producto y luego reservar espacio en memoria
para almacenar una variable de tipo producto
Inicializamos los campos del registro creado dinámicamente
Imprimir camposd el registro
Liberar el espacio dinámico reservado
*/
struct producto
    {
        int codigo;
        char descripcion [50];
        float precio;
    };
int main (int argc, char *argv[]) {
    
    struct producto *prod;
    prod = malloc(sizeof(struct producto));
    printf("Introduzca el código\n");
    scanf("%d",&prod->codigo);
    printf("Introduzca descripcion\n");
    scanf("%s",prod->descripcion);
    printf("Introduzca precio\n");
    scanf("%f",&prod->precio);

    printf("Código del artículo: %d\n", prod->codigo);
    printf("Descripcion del artículo: %s\n", prod->descripcion);
    printf("Precio del artículo: %f\n", prod->precio);
    free(prod);
    prod = NULL;

    return 0;
}