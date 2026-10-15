#include <stdio.h>

int main(void) {
    int numero;

    printf("Ingrese un numero: ");

    if (scanf("%d", &numero) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    if (numero % 2 == 0) {
        printf("El numero %d es par.\n", numero);
    } else {
        printf("El numero %d es impar.\n", numero);
    }
    
    return 0;
}