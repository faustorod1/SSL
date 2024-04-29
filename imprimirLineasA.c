/*
La propuesta es que hagamos un programa que lee un flujo e imprima solo las líneas
que contienen un a. Una especie de grepin pero que solo funciona con una letra.
*/
#include <stdio.h>

#define TAMANIO_BUFFER 80

int main() {
    char BUFFER[TAMANIO_BUFFER];
    int c;

    while ((c=getchar()) != EOF) { //corto el programa con: ctrl + z ((EOF)), unicamente si estan primeros en la linea
        int i = 0;
        int flag = 0;
        while(c != '\n'){
        BUFFER[i] = c;
        if (c == 'a'){
            flag++;
        }
        i++;
        c=getchar();
        }
        if (flag == 1){ //Imprime la linea unicamente si contiene una sola 'a', ni mas ni menos
            for(int n=0; n<i; n++){
                putchar(BUFFER[n]);
            }
            printf("\n");
        }
    }
    return 0;
}
