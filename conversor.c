
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
    
    double km;

    printf("\nIngrese los kilometros: ");
    scanf("%lf", &km);

    printf("Millas: %.3f mi\n", km * 0.621371);
    printf("Metros: %.2f m\n", km * 1000);

    return 0;
}
