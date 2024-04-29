#include <stdio.h>

int longitud(char * cadena);

int main(){
    char cadena[]="hola";
    longitud(cadena);
    return 0;
}
int longitud(char * cadena){
    int largo = 0;
    for(int i = 0; cadena[i] != '\0'; i++){
        largo = i+1;
    }
    printf("La longitud de la cadena es: %d", largo);
    }