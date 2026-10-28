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

    strncpy(estudiante_dir[0].Nombre, "", 50); 
    estudiante_dir[0].Nota = 70; 
    estudiante_dir[0].Edad = 25; 

    
    
    printf("REGISTRO DE ESTUDIANTE\n");
    for(i = 0; 1 < 5; i++) 
    {
        printf("Holaaaaaaaaa"); 
    }
    
    // idk man
}