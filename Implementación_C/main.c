#include <stdio.h>
#include "estudiante.h"

int main ()
{
    Estudiante estudiante;
    char agr_materia [30];
    char elim_materia [30];

    inicializarEstudiante (&estudiante, "Jaime", 67, 5.8);

    mostrarEstudiante (&estudiante);

    mostrarMaterias (&estudiante);

    printf ("\nIngrese la materia que desee agregar: ");
    scanf ("%s", agr_materia);
    printf ("\nAgregando materia: %s\n", agr_materia);
    agregarMateria (&estudiante, agr_materia);
    mostrarMaterias (&estudiante);

    printf ("\nIngrese la materia que desee eliminar: ");
    scanf ("%s", elim_materia);
    printf ("\nEliminando materia: %s\n", elim_materia);
    eliminarMateria (&estudiante, elim_materia);
    mostrarMaterias (&estudiante);
}