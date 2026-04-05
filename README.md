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
todos los archivos .txt o bien rutas enteras. Los elementos de la siontaxis son los siguientes:
- * : Identificador universal, por ejemplo si ponemos *.txt, estariamos ignorando todos los archivos txt ubicados.
- ** : Para seleccionar directorios en cualquier parte del repositorio.
- / : Si se agrega al final de un directorio, ignora todo el directorio. Por otra parte si se agrega al inicio seguido de un archivo x,
solo ignora el archivo x en la ruta especificada.
- ! : Se usa para no ignorar archivos que de otra manera serian ignorados. Por ejemplo si ignoramos todos los archivos .txt pero hay uno
que no queremos ignorar entonces usamos !archivo_no_ignorado.txt.
