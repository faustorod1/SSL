# Resolución del TP
## Trabajo resuelto en Windows
Luego de chequear la version de mi compilador de C:
~~~
PS C:\Users\faust> gcc --version
gcc.exe (Rev3, Built by MSYS2 project) 13.2.0
Copyright (C) 2023 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
~~~
Noté que era la 13.2.0, entonces busque que estandares soporta: ISO C90, ISO C99, ISO C11 y la mayoría de C2X (aunque las caracteristicas del C2X puedan cambiar antes del estandar final).

Luego, cree el programa hello.c, lo copile y lo ejecute a traves de la consola:
~~~
PS C:\Users\faust\OneDrive\Documentos\UTN\2ndo Nivel\Sintaxis y Semantica de los Lenguajes> gcc hello.c -o hello.exe
PS C:\Users\faust\OneDrive\Documentos\UTN\2ndo Nivel\Sintaxis y Semantica de los Lenguajes> .\hello
Hello, World!
~~~
Para redirigir la salida del programa a el archivo "output.txt" modifique el comando `.\hello` por `.\hello > output.txt` y asi se ve:

<img src="https://github.com/faustorod1/SSL/blob/main/00-CHelloWorld/Captura%20de%20Pantalla" alt="Archivo con la salida de mi programa" width="400"/>

