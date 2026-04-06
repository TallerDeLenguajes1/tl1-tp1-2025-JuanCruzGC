# Archivo .gitignore - Punto 2
El archivo **.gitignore** sirve para dar una orden a git para no subir cierto tipo de archivos que por alguna razon no queremos
mostrar en el repositorio.

## ¿Por qué es conveniente incluirlo?
Porque de esta manera ignoramos cierto tipos de archivos, manteniendolos ocultos para las personas que visitan el repositorio.

## ¿Cuando debemos incluirlo?
Debemos incluirlo por ejemplo, cuando guardamos un codigo en C tambien se guarda un ejecutable del mismo archivo, este ejecutable
es insignificante para el repositorio, por lo que para mantener el repositorio limpio y navegable nos conviene ignorar este archivo.

## ¿Como configuraria el archivo .gitignore?
Deberiamos incluir archivos temporales que se crean a partir del IDE, informacion sensible acerca del proyecto, archivos generados por
compilacion, etc.

## ¿Como ignorar un archivo _ignorado_.txt?
El archivo .gitignore utiliza una sintaxis global que le permite omitir archivos especificos, tipos de archivos como por ejemplo 
todos los archivos .txt o bien rutas enteras. Los elementos de la sintaxis son los siguientes:
- * : Identificador universal, por ejemplo si ponemos *.txt, estariamos ignorando todos los archivos txt ubicados.
- ** : Para seleccionar directorios en cualquier parte del repositorio.
- / : Si se agrega al final de un directorio, ignora todo el directorio. Por otra parte si se agrega al inicio seguido de un archivo x,
solo ignora el archivo x en la ruta especificada.
- ! : Se usa para no ignorar archivos que de otra manera serian ignorados. Por ejemplo si ignoramos todos los archivos .txt pero hay uno
que no queremos ignorar entonces usamos !archivo_no_ignorado.txt.

# Codigo sin funcionar y misterioso - Punto 3
## Codigo misterioso
### f_alpha 
Es una funcion que recibe un puntero, guarda el contenido de la variable a la que apunta el puntero en una nueva variable **temp** y define una variable int(entero) con el nombre **rev**. Luego utiliza un bucle while para ir descomponiendo el numero en digitos e ir guardandolos en rev segun su posicion. Al finalizar el bucle asigna el valor de rev al contenido de la variable a la que apunta el puntero.
Por esta razón renombré la funcion como invertir.

### f_beta 
Recibe en puntero que apunta a la variable modificada por la funcion invertir y divide esta variable en 2.
Renombré a esta funcion como divideDos.

### f_gamma
Esta funcion suma los digitos de la variable anteriomente modificada por divideDos, suma todos los digitos y lo suma a la variable misma.
Por esta razon renombre a esta funcion como sumaDigitos.

## Codigo sin funcionar
### Linea 17 - Linea 23
Falta el ; antes de llamar a la funcion printf y antes de cerrar la funcion main.

### Linea 12
Falta el operador de direccion & al llamar a la funcion scanf, esto esta haciendo que la funcion scanf no sepa donde guardar el valor recibido por el usuario.

### Linea 2
No esta incluida la libreria que nos permite mostrar por pantalla (stdio.h)

### Linea 4
La funcion duplicar_numero es una funcion void (no retorna nada) y recibe un numero por valor, es decir, recibe una copia del numero. Esto ocasiona que modifique el valor copia pero no modifica el valor original, por lo que deberiamos pasarle un puntero y que modifique directamente el valor que contiene la variable a la que apunta el puntero.

# Creacion de archivos - Punto 4
## Apartado c
### ¿Que archivos ve en el repositorio?
Veo el archivo recien creado (tp1_1.c) y su archivo ejecutable, una carpeta que se llama .vscode y la carpeta del punto 2 que adentro contiene los archivos .c del codigo misterioso, codigo sin funcionar y sus respectivos ejecutables.

### ¿Cuál cree que no hace falta que esté?
Ningun ejecutable hace falta, ni la carpeta .vscode
## Apartado g
Los apartados 2 y 3 muestran lo mismo ya que el puntero esta apuntando a apuntado, es decir que esta guardando la direccion de memoria de apuntado, por eso cuando mostramos la direccion de memoria de apuntado y el puntero, coinciden.
En el punto 4 obtenemos la direccion de memoria de puntero, es decir, obtenemos el lugar donde se esta guardando la direccion de memoria de apuntado.
No es igual a los anteriores ya que la direccion de memoria del puntero no es lo mismo que la direccion de memoria a la que apunta el puntero.
