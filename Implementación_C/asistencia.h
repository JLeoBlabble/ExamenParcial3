#ifndef ASISTENCIA_H
#define ASISTENCIA_H

typedef struct
{
    char fecha[10];
    char materia[20];
    char estado[10];
};

    Asistencia;

    void inicializarAsistencia (Asistencia *asist, char fecha, char materia, char estado);
    void mostrarAsistencia (Asistencia *asist);

#endif