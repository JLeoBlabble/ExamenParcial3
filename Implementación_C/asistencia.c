#include "asistencia.h"
#include <stdio.h>
#include <string.h>

// Llamada de la funcion para inicializar la fecha, materia y estado de la asistencia

void inicializarAsistencia (Asistencia *asist, const char *fecha, const char *materia, const char *estado)
{
    strncpy (asist -> fecha, fecha, sizeof (asist -> fecha) -1);
    asist -> fecha [sizeof (asist -> fecha) - 1] = '\0';
    strncpy (asist -> materia, materia, sizeof (asist -> materia) -1);
    asist -> materia [sizeof (asist -> materia) - 1] = '\0';
    strncpy (asist -> estado, estado, sizeof (asist -> estado) -1);
    asist -> estado [sizeof (asist -> estado) - 1] = '\0';
}

// Llamada de la funcion para mostar la fecha, materia y estado de la asistencia

void mostrarAsistencia (const Asistencia *asist)
{
    printf ("Ha %s a %s el %s", asist -> estado, asist -> materia, asist -> fecha);
}