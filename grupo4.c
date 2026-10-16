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
    
      
    if (numero > 0) {
        printf("El numero es positivo.\n");
    } else if (numero < 0) {
        printf("El numero es negativo.\n");
    } else {
        printf("El numero es cero.\n");
    }
    return 0;
}