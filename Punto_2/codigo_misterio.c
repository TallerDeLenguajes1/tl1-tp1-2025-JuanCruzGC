#include <stdio.h>

void invertir(int *p) {
    int temp = *p;
    int rev = 0;
    while (temp > 0) {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }
    *p = rev;
}

void divideDos(int *p) {
    *p = *p / 2;
}

void sumaDigitos(int *p) {
    int temp = *p;
    int suma = 0;
    while (temp > 0) {
        suma = suma + (temp % 10);
        temp = temp / 10;
    }
    *p = *p + suma;
}

void procesar_numero(int *valor_referencia) {
    invertir(valor_referencia);
    divideDos(valor_referencia);
    sumaDigitos(valor_referencia);
}

int main() {
    int num = 452;
    
    printf("Iniciando depuracion con el valor: %d\n", num);
    
    // Instrucción para el alumno: 
    // Pon un breakpoint aquí (F9) y usa F11 (Step Into) para entrar a cada función.
    procesar_numero(&num);
    
    printf("Resultado final del enigma: %d\n", num);
    
    return 0;
}