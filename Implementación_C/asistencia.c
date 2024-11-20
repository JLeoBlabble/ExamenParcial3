#include "asistencia.h"
#include <string.h>

void inicializarAsistencia (Asistencia *asist, const char *fecha, const char *materia, const char *estado)
{
    strncpy (asist -> fecha, fecha, sizeof (asist -> fecha));
    strncpy (asist -> materia, materia, sizeof (asist -> materia));
    strncpy (asist -> estado, estado, sizeof (asist -> estado));
}