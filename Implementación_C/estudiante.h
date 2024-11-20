#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

typedef struct
{

    char nombre[30];
    int edad;
    float promedio;

    char materias[5][20];
    int num_materias;
}

    Estudiante;

    void inicializarEstudiante (Estudiante *est, const char *nombre, int edad, float promedio);
    void mostrarEstudiante (Estudiante *est);
    void mostrarMaterias (Estudiante *est);
    void agregarMateria (Estudiante *est, const char *materia);
    void eliminarMateria (Estudiante *est, char *materia);

#endif