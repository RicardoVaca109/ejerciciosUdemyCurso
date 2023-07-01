#include <stdio.h>
 /*Escribir un programa que pdia un número al usuario y muestre el día de la
    semana equivalente. Si introduce un número fuera del rango válido (1-7)
    se debe mostrar un mensaje de error 
    */
int main (int argc, char *argv[]) {
   
   int dia;
   printf("Introduzca un numero(rango de 1-7):\n");
   scanf("%d",&dia);

   switch (dia)
   {
   case (1):
        printf("Es Lunes");
    break;
    case (2):
        printf("Es Martes");
    break;
    case (3):
        printf("Es Miercoles");
    break;
   case (4):
        printf("Es Jueves");
    break;
    case (5):
        printf("Es Viernes");
    break;
    case (6):
        printf("Es Sabado");
    break;
    case (7):
        printf("Es Domingo");
    break;
   default:
   printf("Numero ingresado no valido");
    break;
   }

    return 0;
}