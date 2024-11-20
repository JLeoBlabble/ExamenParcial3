#include "estudiante.h"
#include <stdio.h>
#include <string.h>

void inicializarEstudiante (Estudiante *est, const char *nombre, const int edad, const float promedio)
{
    strncpy (est -> nombre, nombre, sizeof (est -> nombre));
    est -> edad = edad;
    est -> promedio = promedio;
    est -> num_materias = 4;

    const char *materias_base [] = {"Matematicas", "Programacion", "Ingles", "Informatica"};
    for (int i = 0; i < est -> num_materias; i++)
    {
        strncpy (est -> materias [i], materias_base [i],sizeof (est -> materias [i]));
    }
}

void mostrarEstudiante (Estudiante *est)
{
    printf ("\nNombre: %s\n", est -> nombre);
    printf ("Edad: %d\n", est -> edad);
    printf ("Promedio: %f\n", est -> promedio);
}

void mostrarMaterias (Estudiante *est)
{
    printf ("Materias: \n");
    for (int i = 0; i < est -> num_materias; i++)
    {
        printf (" %s\n", est -> materias [i]);
    }
}

void agregarMateria (Estudiante *est, const char *materia)
{
    if (est -> num_materias < 5)
    {
        strncpy (est -> materias [est -> num_materias], materia, sizeof (est -> materias [est -> num_materias]));
        est -> num_materias++;
    }
    else
    {
        printf ("No se pueden agregar más materias\n");
    }
}

void eliminarMateria (Estudiante *est, char *materia)
{
    for (int i = 0; i < est -> num_materias; i++)
    {
        if (strcmp (est -> materias [i], materia) == 0)
        {
            for (int j = i; j < est -> num_materias -1; j++)
            {
                strncpy (est -> materias [j], est -> materias [j + 1], sizeof (est -> materias [j]));
            }
            est -> num_materias--;
            printf ("Materia eliminada: %s\n", materia);
            return;
        }
    }
}