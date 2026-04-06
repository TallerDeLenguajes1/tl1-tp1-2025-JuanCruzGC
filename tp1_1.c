#include <stdio.h>

int main(){
    int *puntero;
    int apuntado=22;
    puntero=&apuntado;
    printf("Contenido del puntero: %d\n",*puntero);
    printf("Direccion de memoria almacenada por el puntero: %p\n",puntero);
    printf("Direccion de memoria de la variable: %p\n",&apuntado);
    printf("Direccion de memoria del puntero: %p\n",&puntero);
    printf("Tamanio de memoria utilizado por apuntado: %zu bytes\n",sizeof(apuntado));
    printf("Tamanio de memoria utilizado por puntero: %zu bytes",sizeof(puntero));
    return 0;
}