#ifndef ASISTENCIA_H
#define ASISTENCIA_H

// Definicion de la estructura Asistencia y de sus variables

typedef struct
{
    char fecha[10];
    char materia[20];
    char estado[20];
}

// Definicion de las funciones par inicializar y mostrar la asistencia

    Asistencia;

    void inicializarAsistencia (Asistencia *asist, const char *fecha, const char *materia, const char *estado);
    void mostrarAsistencia (const Asistencia *asist);

#endif