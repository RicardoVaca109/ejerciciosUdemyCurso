#include <stdio.h>

int main(int argc, char *argv[])
{
    /*Escribir un programa que pida al usuario sus notas y compruebe si ha
    suspendido (<5), si ha sacado suficiente (5), un bien(6), un notable(7-8)
    o un sobresaliente(9-10)*/
    int nota;

    printf("Introduzca nota del alumno\n");
    scanf("%d", &nota);
    if (nota >= 0 && nota <=5)
    {
        printf("Suspendido");
    }
    else if (nota == 6)
    {
        printf("Bien");
    }
    else if (nota == 7 || nota == 8)
    {
        printf("notable");
    }
    else if (nota == 9 || nota == 10)
    {
        printf("sobresaliente");
    }
    else
    {
        printf("valor de nota no valido");
    }

    return 0;
}