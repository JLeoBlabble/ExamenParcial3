#include <stdio.h>
#include "estudiante.h"

int main ()
{
    Estudiante estudiante;
    char agr_materia [30];
    char elim_materia [30];

    printf ("Introduzca el nombre del estudiante: ");
    scanf ("%s", estudiante.nombre);

    do {
        printf ("Introduzca la edad del estudiante (18 o mas): ");
        scanf ("%d", &estudiante.edad);
    } while (estudiante.edad < 18);

    do
    {
        printf ("Introduzca el promedio del estudiante (entre 0 y 10): ");
        scanf ("%f", &estudiante.promedio);
    } while (estudiante.promedio < 0 || estudiante.promedio > 10);

    inicializarEstudiante (&estudiante, estudiante.nombre, estudiante.edad, estudiante.promedio);

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