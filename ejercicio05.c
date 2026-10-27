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

    return 0;
}