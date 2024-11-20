#include <stdio.h>
#include "estudiante.h"

int main ()
{
    Estudiante estudiante;

    inicializarEstudiante (&estudiante, "Jaime", 67, 5.8);

    mostrarEstudiante (&estudiante);

    mostrarMaterias (&estudiante);

    printf ("\nAgregando materia: 'Fisica'\n");
    agregarMateria (&estudiante, "Fisica");
    mostrarMaterias (&estudiante);

    printf ("\nEliminando materia: 'Ingles'\n");
    eliminarMateria (&estudiante, "Ingles");
    mostrarMaterias (&estudiante);
}