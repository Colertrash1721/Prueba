
#include <stdio.h>

int main(void) {
    // Grupo 2
    // Integrantes: David Mireles y Albert

    double metros;

    printf("CONVERSOR DE UNIDADES - GRUPO 2\n");
    printf("Integrantes: David Mireles y Albert\n");

    printf("\nIngrese los metros: ");
    scanf("%lf", &metros);

    printf("Centimetros: %.2f cm\n", metros * 100);
    printf("Kilometros: %.3f km\n", metros / 1000);

    return 0;
}
