#include <iostream>
#include <string>
#include "estudiante.h"
using namespace std;

Estudiante::Estudiante() {

    string nombre;
    int edad;
    float promedio;

}

void Estudiante::mostrarEstudiante(string nombre, int edad, float promedio) {
    cout << "El nombre del estudiante es: " << nombre << endl;
    cout << "La edad del estudiante es: " << edad << endl;
    cout << "El promedio del estudiante es: " << promedio << endl;

}