#include <stdio.h>

int main (int argc, char *argv[]) {
    //Escribir un programa que transforme de euros a pesetas
    float euros;
    printf("Introduce los euros que quieres convertir a pesetas:\n");
    scanf("%f",&euros);
    //pesetas = euros * 166.386
    printf("%2.f euros equivalen a %2.f pesetas ",euros, euros * 166.386 );

    return 0;
}