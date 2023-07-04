#include <stdio.h>
/*
En un hotel la información de las habitaciones se guarda en un vector
bidimensional. Cada posición del vector  es a su vez otro vector en el que la 
primera posición indica el número de habitación y las 3 siguientes el precio
de la habitación en temporada alta, media y baja.
Ejemplo[[1,120,670,8900]].
Escribe un programa en el que se defina una matriz como la anterior y muestre
el promedio de cada una  de las temporads*/
int main (int argc, char *argv[]) {
    int info [3][4] = {{1,120,150,220},{2,130,160,230},{3,100,120,200}};
    int suma_temp_baja = 0, suma_temp_media = 0, suma_temp_alta = 0;


    for (int i = 0; i < 3 ; i++)
    {
        for (int j = 1; j < 4; j++) 
        //el numero de la habitación en este problema no nos sirv solo los
        //precios de cada temporada por eso j = 1
        {
             if (j == 1)
             {
                suma_temp_baja = suma_temp_baja + info[i][j];
             }
             if ( j == 2)
             {
                suma_temp_media = suma_temp_media + info[i][j];
             }
             if (j == 3)
             {
                suma_temp_alta = suma_temp_alta + info[i][j];
             }
             
             
        }
        
    }
    float promedio_baja = suma_temp_baja/3;
    float promedio_media = suma_temp_media/3;
    float promedio_alta = suma_temp_alta/3;

    printf("Promedio de las temporada baja: %2.f\n",promedio_baja);
    printf("Promedio de las temporada media: %2.f\n",promedio_media);
    printf("Promedio de las temporada alta: %2.f\n",promedio_alta);
    return 0;
}