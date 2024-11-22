#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
using namespace std;

class Estudiante {
    public:

    string nombre;
    int edad;
    float promedio;

    string materias[6] = {"Matemáticas", "Programación", "Inglés", "Informática"};
    string materiasViables[6] = {"Matemáticas", "Programación", "Inglés", "Informática", "Física", "Técnicas-de-Comunicación"};

    Estudiante();

    void mostrarEstudiante(string nombre, int edad, float promedio);

    void mostrarMaterias();
    void agregarMateria();
    void eliminarMateria();

};

#endif //ESTUDIANTE_H
