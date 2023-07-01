#include <stdio.h>
/* Escribir un programa que se utilice  para calcular el prefcio final de
   venta de coches de segunda mano de un consencionario. Para ello, el programa
   debe pedir al ususarioque introduzca el precio base del vehículo, el número
   de kilometros y su consumo
   --Si los km son inferiores a los 20000 y su consumo igual o inferior a 5,
   incrementar el precio base un 20%
   --Si los km  son superiores a 20000 y su consumo igual o inferior a 5,
   incrementar el precio base un 10%
   --Si el consumo es superior a 5 incrementar el precio base un 5%
   */

int main(int argc, char *argv[])
{
    int precio_base, km;
    float consumo, precio_final;

    printf("Introduzca el precio base del vehiculo:\n");
    scanf("%d",&precio_base);
    printf("Introduzca el Kilometraje del vehiculo:\n");
    scanf("%d",&km);
    printf("Introduzca el consumo del vehiculo:\n");
    scanf("%f",&consumo);

    if (km < 20000 && consumo <= 5)
    {   
        precio_final = precio_base * 1.2;
    }
     else if (km >= 20000 && consumo <=5)
     {
        precio_final = precio_base * 1.1; 
     }
    else if (consumo > 5)
    {
        precio_final = precio_base * 1.05;
    }

    printf("El precio final del auto es: %.2f", precio_final);
    
    
    
    return 0;
}