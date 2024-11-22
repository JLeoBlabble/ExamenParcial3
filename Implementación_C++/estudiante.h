#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
using namespace std;

/* Definir clase Estudiante, con los valores de nombre, edad y promedio.
 * Tiene dos arrays, uno que contiene las materias actuales en el horario del estudiante,
 * y otra todas las asignaturas viables/del curso.
 * Al final, se definen las funciones requeridas por el ejercicio.
 */

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
