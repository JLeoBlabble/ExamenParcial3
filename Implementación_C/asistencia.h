#ifndef ASISTENCIA_H
#define ASISTENCIA_H

typedef struct
{
    char fecha[10];
    char materia[20];
    char estado[20];
}

    Asistencia;

    void inicializarAsistencia (Asistencia *asist, const char *fecha, const char *materia, const char *estado);
    void mostrarAsistencia (const Asistencia *asist);

#endif