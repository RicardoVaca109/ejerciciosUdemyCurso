#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Crear un programa que pida al ususario los nombres,edades,alturas
de los jugadores de un equipo de baloncesto (5 jugadores).
Posteriormente le presentará un menú que le permita:
1)Listar nombres y alturas de los jugadores
2)Buscar un Jugador por su nombre y que nos de su nombre, altura y edad
3)Indicar el nombre y la altura del jugador más alto del equipo*/
int main (int argc, char *argv[]) {
    struct jugador
    {
        char nombre [50];
        int edad;
        float altura;
    };

    struct jugador jugadores[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Nombre del Jugador:%d\n",i+1);
        gets(jugadores[i].nombre);//leer la cadena del nombre
        printf("Edad del Jugador:%d\n",i+1);
        scanf("%d", &jugadores[i].edad);
        printf("Altura del Jugador:%d\n", i+1);
        scanf("%f", &jugadores[i].altura);

        //limpiar el buffer del salto de linea que leería gets()
        fflush(stdin);
    }
    int opcion = -1;
    while (opcion!=0)
    {
        printf("Introduce una opción que deseas:\n 1-listar jugador\n 2-Buscar Jugador\n 3-Jugador mas alto\n 0-salir\n");
        scanf("%d",&opcion);
        fflush(stdin);
        if (opcion ==1)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("Jugador de nombre %s y su altura %.2f\n", 
                                    jugadores[i].nombre,jugadores[i].altura);
            }
            
        }
        if (opcion == 2)
        {
            char nombre_jugador[50];
            printf("Introduzca el nombre del jugador a buscarse\n");
            gets(nombre_jugador);
            int encontrado = 0;
            for (int i = 0; i < 5; i++)
            {
                if (strcmp(jugadores[i].nombre,nombre_jugador) == 0 )
                {
                     encontrado = 1;
                     printf("la edad del jugador es %d y su altura %.2f\n"
                                    ,jugadores[i].edad,jugadores[i].altura);
                }    
            }
            if (encontrado == 0)
            {
                printf("Jugador no encontrado\n");
            }
            
        }
        if (opcion == 3)
        {
            float mayor_altura = jugadores[0].altura;
            char nombre_mayor[50];
            int edad_mayor = jugadores[0].edad;
            strcpy(nombre_mayor,jugadores[0].nombre);
            for (int i = 1; i < 5; i++)
            {
                if (jugadores[i].altura > mayor_altura)
                {
                    strcpy(nombre_mayor,jugadores[i].nombre);
                    edad_mayor = jugadores[i].edad;
                    mayor_altura = jugadores[i].altura;
                }
            }
            printf("El jugador de mayor altura es %s y su edad es %d \n",
                               nombre_mayor, edad_mayor);
            
        }
        if ( opcion != 0 && opcion != 1 && opcion != 2 && opcion != 3)
        {
            printf("Opción Incorrecta");
        }
        
        
        
    }
    
    

    
    return 0;
}