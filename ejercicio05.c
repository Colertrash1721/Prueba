/*
Título: Ejercicio_5_Modificar_nota
Matrícula: 2026-0819
Nombre: Junior Nicolas Reyes Ferreras
Sección: Miércoles
*/

#include <stdio.h>
#include <string.h>

// Definimos la estructura: una "ficha" que guarda los datos de un estudiante.
struct Estudiante {
    char nombre[50];  // Aquí va el nombre (texto)
    float nota;       // Aquí va la nota (número con decimales)
};

int main(void) {
    // Creamos un estudiante y le damos sus valores iniciales.
    struct Estudiante estudiante = {"Ana", 75.5};

    // Creamos un puntero que apunta a la ficha del estudiante.
    // El símbolo & significa "la dirección donde vive esta ficha".
    struct Estudiante *ptr = &estudiante;

    // Comprobamos que el puntero realmente apunta a algo.
    if (ptr == NULL) {
        printf("Error: el puntero no apunta a nada.\n");
        return 1;
    }

    // Mostramos la nota ANTES de modificarla.
    printf("Estudiante: %s\n", ptr->nombre);
    printf("Nota antes: %.2f\n", ptr->nota);

    // Modificamos la nota usando el puntero.
    // El símbolo -> permite entrar a un campo de la ficha usando el puntero.
    ptr->nota = 90.0;

    // Mostramos la nota DESPUÉS de modificarla.
    printf("Nota despues: %.2f\n", ptr->nota);

    return 0;
}

