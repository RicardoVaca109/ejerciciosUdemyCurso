#include <stdlib.h>
#include <stdio.h>

int main (int argc, char *argv[]) {

    int n; //variable apra que el usuario le de el valor
    printf("Usuario Ingrese un valor entero\n");
    scanf("%d", &n); //"&" notación para que se guarde el valor que el usuario ingrese
    printf("El valor que ingreos el usuario es = %d\n",n);

    float n1; //variable apra que el usuario le de el valor
    printf("Usuario ahora ingrese un valor float\n");
    scanf("%f", &n1); //"&" notación para que se guarde el valor que el usuario ingrese
    printf("El valor que ingreso el usuario es = %.2f\n",n1);


    char ch; //variable apra que el usuario le de el valor
    printf("Usuario ahora ingrese un caracter \n");
    scanf("%c", &ch); //"&" notación para que se guarde el valor que el usuario ingrese
    printf("El valor que ingreso el usuario es = %c",ch);


    return 0;
}