#include <stdio.h>
// es mejor dividir los programa en fucniones separadas para que sea más legible
// y escalable el código

void sumadetwoNums();//declaramos o prototipamos la función
void sumadethreeNums(int num1, int num2, int num3);
int restaNums(int rest1, int rest2);
void sumapointer(int num1, int num2, int *resultpoint);

//main
int main (int argc, char *argv[]) {

    sumadetwoNums();//invocamos a la funcion de afuera
    
    int num1,num2,num3;
    printf("Introduce primer numero de la segunda funcion:\n");
    scanf("%d", &num1);
    printf("Introduce segundo numero de la segunda funcion:\n");
    scanf("%d", &num2);
    printf("Introduce tercer numero de la segunda funcion:\n");
    scanf("%d", &num3);
    sumadethreeNums(num1,num2,num3);

    //función de la resta
    int rest1,rest2;
    printf("Introduce un numero:\n");
    scanf("%d", &rest1);
    printf("Introduce otro numero:\n");
    scanf("%d", &rest2);
    int resultadorest = restaNums(rest1,rest2);
    printf("La resta es de %d\n", resultadorest);

    //con puntero
    int resultpontier;
    sumapointer(num1,num2,&resultpontier);
    printf("La funcion suma con puntero es: %d",resultpontier);
    return 0;
}

void sumadetwoNums(){
    int numero1,numero2;
    printf("Introduce un numero:\n");
    scanf("%d", &numero1);
    printf("Introduce otro numero:\n");
    scanf("%d", &numero2);
    int result = numero1 +numero2;
    printf("la suma de ambos numeros introducidos es: %d\n", result );

}

void sumadethreeNums(int num1, int num2, int num3){
    int result = num1 +num2 +num3;
    printf("la suma de los 3 numeros introducidos es: %d\n", result );

}

int restaNums(int rest1, int rest2){
    int resultado = rest1 - rest2;
    return resultado;
}

void sumapointer(int num1, int num2, int *resultpoint){
    *resultpoint = num1 +num2;
}