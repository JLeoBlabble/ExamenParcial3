#include "asistencia.h"
#include <stdio.h>
#include <string.h>

void inicializarAsistencia (Asistencia *asist, char *fecha, char *materia, char *estado)
{
    strncpy (asist -> fecha, fecha, sizeof (asist -> fecha));
    strncpy (asist -> materia, materia, sizeof (asist -> materia));
    strncpy (asist -> estado, estado, sizeof (asist -> estado));
}