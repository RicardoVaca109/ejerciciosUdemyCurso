#include <stdio.h>

int main (int argc, char *argv[]) {
    FILE *f;
    //lectura de un fichero
    /*f = fopen("prueba.txt","r");
    char *linea;
    while (feof(f) == 0)
    {
        fscanf(f,"%s", linea);
        printf("%s\n",linea);
    }
    fclose(f);
    */
    
    //Escribir en un fichero
    /*f = fopen("prueba.txt","w");
    char *cadena = "esta es una cadena de prueba";
    fprintf(f,"%s\n",cadena);
    fclose(f);*/
    f = fopen("prueba.txt","a");
    char *cadena = "Esta es otra cadena de prueba";
    fprintf(f,"%s\n",cadena);
    fclose(f);


    return 0;
}