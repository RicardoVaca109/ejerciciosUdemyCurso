#include <stdio.h>
/*Desarrolla un programaque solicite la carga de un número al ususario. A
continuación, deberá pedir las notas de ese número de alumnos, y mostrar
por pantalla el número de alumnos aprobados y suspensos*/

int main (int argc, char *argv[]) {
    int n,contador_aprobados = 0,contador_suspensos = 0;
    float nota;
    printf("Introduce el numero de alumnos:\n");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        printf("Introduce la nota del alumno: %d \n",i);
        scanf("%f",&nota);
        if (nota >= 0 && nota <5)
        {
            contador_suspensos++;
        }
        else{
            contador_aprobados++;
        }
        
    }
    printf("El numero de aprobados es %d y de suspendidos es %d\n",
                            contador_aprobados,contador_suspensos);
    
    return 0;
}