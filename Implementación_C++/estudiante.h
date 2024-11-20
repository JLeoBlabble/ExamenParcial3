#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
using namespace std;

class Estudiante {
    public:

    string nombre;
    int edad;
    float promedio;

    string materias[5] = {"Matemáticas", "Programación", "Inglés", "Informática"};

    Estudiante();

    void mostrarEstudiante(string nombre, int edad, float promedio);

    void mostrarMaterias();
    void agregarMateria();
    void eliminarMateria();

};

#endif //ESTUDIANTE_H
