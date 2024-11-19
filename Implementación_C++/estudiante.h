#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
using namespace std;

class Estudiante {
    public:

    string nombre;
    int edad;
    float promedio;

    Estudiante();

    void mostrarEstudiante(string nombre, int edad, float promedio);

};


#endif //ESTUDIANTE_H
