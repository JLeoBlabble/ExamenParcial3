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

void Estudiante::mostrarMaterias() {
    cout << "Las materias del estudiante son: ";
    for (int i = 0; i < 4; i++) {
        cout << materias[i] << ", ";

    }
    cout << endl;
}

void Estudiante::agregarMateria() {
    string materiaAgregada;
    bool materiaViabilidad = false;
    cout << "Introduzca la materia que deseas agregar: ";
    cin >> materiaAgregada;

    while (materiaViabilidad == false) {
        for (int i = 0; i < 6; i++) {
            if (materiaAgregada == materiasViables[i]) {
                materiaViabilidad = true;
                break;
            }
        }
        if (materiaViabilidad == false) {
            cout << "Un estudiante de ingeniería informática sólo tiene las siguientes materias: ";
            for (int i = 0; i < 6; i++) {
                cout << materiasViables[i] << ", ";
            }
            cout << "\nPor favor introduzca una de las materias previamente señalizadas: ";
            cin >> materiaAgregada;
        }
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
    bool materiaViabilidad = false;
    cout << "Introduzca la materia que deseas eliminar: ";
    cin >> materiaEliminada;

    while (materiaViabilidad == false) {
        for (int i = 0; i < 6; i++) {
            if (materiaEliminada == materias[i]) {
                materiaViabilidad = true;
                break;
            }
        }
        if (materiaViabilidad == false) {
            cout << "Un estudiante de ingeniería informática sólo tiene las siguientes materias: ";
            for (int i = 0; i < 6; i++) {
                cout << materiasViables[i] << ", ";
            }
            cout << "\nPor favor introduzca una de las materias previamente señalizadas: ";
            cin >> materiaEliminada;
        }
    }

    for (int i = 0; i < 5; i++) {
        if (materias[i] == materiaEliminada) {
            materias[i] = "";
            cout << "La materia eliminada es: " << materiaEliminada << endl;
        }
    }
}

