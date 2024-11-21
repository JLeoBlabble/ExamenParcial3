#include <iostream>
#include <string>
#include <stdexcept>
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

void Estudiante::mostrarMaterias() {
    cout << "Las materias del estudiante son: ";
    for (int i = 0; i < 4; i++) {
        cout << materias[i] << ", ";
    }
    cout << endl;
}

void Estudiante::agregarMateria() {
    string materiaAgregada;
    cout << "Introduzca la materia que deseas agregar: ";
    cin >> materiaAgregada;

    try {
        bool materiaViabilidad = false;
        for (int i = 0; i < 6; i++) {
            if (materiaAgregada == materiasViables[i] && materiaAgregada != materias[i]) {
                materiaViabilidad = true;
                break;
            }
        }
        if (!materiaViabilidad) {
            throw invalid_argument("Materia no viable");
        }
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
        return;
    }

    for (int i = 0; i < 6; i++) {
        if (materias[i].empty()) {
            materias[i] = materiaAgregada;
            cout << "La materia agregada es: " << materiaAgregada << endl;
            break;
        }
    }
}

void Estudiante::eliminarMateria() {
    string materiaEliminada;
    cout << "Introduzca la materia que deseas eliminar: ";
    cin >> materiaEliminada;

    try {
        bool materiaViabilidad = false;
        for (int i = 0; i < 6; i++) {
            if (materiaEliminada == materiasViables[i] && materiaEliminada != materias[i]) {
                materiaViabilidad = true;
                break;
            }
        }
        if (!materiaViabilidad) {
            throw invalid_argument("Materia no viable");
        }
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
        return;
    }

    for (int i = 0; i < 5; i++) {
        if (materias[i] == materiaEliminada) {
            materias[i] = "";
            cout << "La materia eliminada es: " << materiaEliminada << endl;
        }
    }
}