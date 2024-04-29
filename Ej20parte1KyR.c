#include <stdio.h>
/*.
No se si escorrecto preestablecerle un tamaño a la cadena como lo hice en "char cadena[100], cadena2[100];"" o en "char cadenaFinal[200];"
*/

void longitud(char[]);
void esVacia(char[]);
void concatenar(char[], char[]);

void testLongitud();
void testEsVacia();
void testConcatenar();

int main(){

    testLongitud();
    testEsVacia();
    testConcatenar();

    char cadena[100], cadena2[100];
    
    printf("Porfavor Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    
    longitud(cadena);
    esVacia(cadena);
    
    printf("Porfavor Ingrese otra cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    
    concatenar(cadena, cadena2);
    return 0;
}

void longitud(char cadena[100]){
    int tam = 0;
    for(int i=0; cadena[i] != '\0' && cadena[i] != '\n'; i++){
        tam++;
    }
    printf("La longitud de la cadena es: %d\n", tam);
}

void esVacia(char cadena[100]){
    if(cadena[0] == '\0' || (cadena[0] == '\n' && cadena[1] == '\0')){
        printf("La cadena es vacia\n");
    }else{
        printf("La cadena no es vacia\n");
    }
}

void concatenar(char cadena[100], char cadena2[100]){
    char cadenaFinal[200];
    int continuacion = 0;
    for(int i=0; cadena[i]!= '\0'&& cadena[i] != '\n';i++){
        cadenaFinal[i] = cadena[i];
        continuacion++;
    }
    int tamFinal = continuacion;
     for(int i=0; cadena2[i]!= '\0' && cadena2[1] != '\n';i++){
        cadenaFinal[i+continuacion] = cadena2[i];
        tamFinal++;
    }
    cadenaFinal[tamFinal] = '\0'; /*sin esta linea la compu no detectaba el fin de la cadena y
    me imprimia cosas raras al final de la cadena. Investigue y era porque seguia leyendo de memoria
    lo que encontrase luego de la cadena
    */
    printf("La concatenacion de ambas cadenas es: %s\n", cadenaFinal);
}

//Funciones de testeo

void testLongitud() {
    char test1[] = "hola";
    printf("Prueba 1 longitud: ");
    longitud(test1); // Debería imprimir 4

    char test2[] = "";
    printf("Prueba 2 longitud: ");
    longitud(test2); // Debería imprimir 0
}

void testEsVacia() {
    char test1[] = "hola";
    printf("Prueba 1 esVacia: ");
    esVacia(test1); // Debería imprimir "La cadena no es vacia"

    char test2[] = "";
    printf("Prueba 2 esVacia: ");
    esVacia(test2); // Debería imprimir "La cadena es vacia"
}

void testConcatenar() {
    char test1[] = "hola";
    char test2[] = "chau";
    printf("Prueba 1 concatenar: ");
    concatenar(test1, test2); // Debería imprimir "holachau"

    char test3[] = "aaa";
    char test4[] = "";
    printf("Prueba 1 concatenar: ");
    concatenar(test3, test4); // Debería imprimir "aaa"
}
