#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793238462643383279502884
//sobre el motor de combustión 
int main (int argc, char *argv[]) {
    
    struct cilindro
    {
        float diametro;
        float carrera;

    };

    struct motor
    {
        int id;
        struct cilindro cilindro1;
        int num_cilindros;
        float cilindrada;
    };


    struct motor motor1;
    printf("Ingrese el identificador\n");
    scanf("%d",&motor1.id);
    printf("Introduce el diametro del cilindro(mm)\n");
    scanf("%f", &motor1.cilindro1.diametro);
    printf("Introduce la carrera del cilindro(mm)\n");
    scanf("%f", &motor1.cilindro1.carrera);
    printf("Introduce el numero de cilindros\n");
    scanf("%d", &motor1.num_cilindros);
    
    motor1.cilindrada = (motor1.num_cilindros*(motor1.cilindro1.carrera/10)* PI * pow((motor1.cilindro1.diametro/10),2))/4;
    printf("Identificador: %d\n", motor1.id);
    printf("Diametro del cilindro: %.2f\n", motor1.cilindro1.diametro);
    printf("Carrera del cilindro: %.2f\n", motor1.cilindro1.carrera);
    printf("Nro de cilindros: %d\n", motor1.num_cilindros);
    printf("Con esos datos la cilindrada es: %.2f", motor1.cilindrada);


    
    

    return 0;
}