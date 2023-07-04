#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <limits.h>

int main (int argc, char *argv[]) {
    //uno de los ususo de ctype
    // isdigit() devuelve 1 si el caracter representa a un digito y 0 si no es
    printf("%d\n", isdigit('r'));

    //una de las funcions de math es sqrt o raiz cuadrada
    printf("%.2f\n", sqrt(7));

    //funcion de limit.h
    printf("%d\n",INT_MAX);

    //funcion rand de stdlib numero aleatorios
    srand(time(NULL));
    printf("%d\n", rand() % 11);

    //funcion string.h strlen para saber de cuantos caracteres consta una cadena
    printf("%d\n", strlen("Como te atreves"));

    //funcion de time.h el time creando la fecha actual y difftime diferencia
    //entre 2 fechas en double
    time_t comienzo, final;
    comienzo = time( NULL );
    for (int i = 0; i < 100000; i++)
    {
        printf("-");
    }
    final = time( NULL );
    printf("%f\n",difftime(comienzo,final));
    
    return 0;
} 