#include <stdio.h>

//Apartado a)
int cuadradoValor(int numero){
    return numero*numero;
}
//Apartado b)
void cuadradoReferencia(int *p){
    int aux;
    aux=*p;
    *p=aux*aux;
}
//Apartado c)
void mostrarVariable(int *p){
    printf("Direccion de memoria: %p\n",p);
    printf("Contenido: %d\n",*p);
}
//Apartado d)
void invertir(int *a,int *b){
    int aux=*a;
    *a=*b;
    *b=aux;
}
//Apartado e)
void masGrande(int *a,int *b){
    if(*a>*b){
        int aux=*b;
        *b=*a;
        *a=aux;
    }

}
void main(){
    int num1=9;int num2=5;
    printf("Num 1: %d\n",num1);
    printf("Num 2: %d\n",num2);
    masGrande(&num1,&num2);
    printf("Num 1: %d\n",num1);
    printf("Num 2: %d\n",num2);
    invertir(&num1,&num2);
    printf("Num 1: %d\n",num1);
    printf("Num 2: %d\n",num2);
}