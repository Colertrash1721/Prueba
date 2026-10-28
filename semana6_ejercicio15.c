/*
Titulo: #15 Cinco estudiante 
Matricula: 2026-0288
Nombre: Layla Garcia 
Seccion: Miercoles
*/

#include <stdio.h>
#include <conio.h>
#include <string.h> 

struct Estudiante
{
    char Nombre[50]; 
    int Edad; 
    float Nota; 
}; 

int main()
{
    struct Estudiante estudiante_dir[5]; 
    int i; 

    strncpy(estudiante_dir[0].Nombre, "Jonathan", 50); 
    estudiante_dir[0].Nota = 95; 
    estudiante_dir[0].Edad = 25; 

    strncpy(estudiante_dir[1].Nombre, "Joseph", 50); 
    estudiante_dir[1].Nota = 80; 
    estudiante_dir[1].Edad = 22;

    strncpy(estudiante_dir[2].Nombre, "Jotaro", 50); 
    estudiante_dir[2].Nota = 100; 
    estudiante_dir[2].Edad = 25;

    strncpy(estudiante_dir[3].Nombre, "Yosuke", 50); 
    estudiante_dir[3].Nota = 100; 
    estudiante_dir[3].Edad = 25;
    
        strncpy(estudiante_dir[4].Nombre, "Giorno", 50); 
    estudiante_dir[4].Nota = 100; 
    estudiante_dir[4].Edad = 25;
    
    
    printf("REGISTRO DE ESTUDIANTE\n");
    for(i = 0; i < 5; i++) 
    {
        struct Estudiante estudiante_actual = estudiante_dir[i]; 
        printf("Nombre: %s Nota: %.2f Edad: %d\n", estudiante_actual.Nombre, estudiante_actual.Nota, estudiante_actual.Edad ); 
    }

    return 0; 
}