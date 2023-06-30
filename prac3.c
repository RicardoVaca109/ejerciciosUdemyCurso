#include <stdio.h>

int main (int argc, char *argv[]) {
    //escribir un programa que pida al ususario el valor de la base y la altura
    // de un rectángulo y con ellos se calcule el área A = bxh

    float base,altura;
    printf("Introduzca la base del rectangulo\n");
    scanf("%f", &base);
    printf("Introduzca la altura del rectangulo\n");
    scanf("%f", &altura); //en los scanf
    float area = base * altura;
    printf("El Area del rectangulo (Base %.2f *Altura %.2f) es:%.2f", base,
    altura,area); //hasta aqui le dejo
    return 0;
}