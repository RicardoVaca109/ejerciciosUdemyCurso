#include <stdio.h>
/*Cargar por teclado y almacenar un vector el peso de 5 personas. Obtener
el promedio de los mismos. Contar cuantas personas pesan más que el promedio
y cuantas pesan menos*/
int main (int argc, char *argv[]) {

    float pesos [5];
    float suma = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Ingrese el peso Nro. %d:\n", i);
        scanf("%f", &pesos[i]);
        suma = suma + pesos[i];
    }
    
    float promedio = suma/5;
    int contador_mayor_igual =0;
    int contador_menor = 0;

    for (int i = 0; i < 5; i++)
    {
        if (pesos[i] >= promedio)
        {
            contador_mayor_igual ++; 
        }
        else
        {
            contador_menor ++;
        }

    }
    printf("El promedio de los pesos ingresado es: %.2f\n",promedio);
    printf("Nro pesos mayores iguales que el promedio: %d\n",contador_mayor_igual);
    printf("Nro pesos menores que el promedio: %d\n",contador_menor);


    return 0;
}