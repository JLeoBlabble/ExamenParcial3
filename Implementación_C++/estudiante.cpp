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
    cout << "Introduzca la materia que deseas agregar: ";
    cin >> materiaAgregada;
    for (int i = 0; i < 5; i++) {
        if (materias[i].empty()) {
            materias[i] = materiaAgregada;
            cout << "La materia agregada es: " << materiaAgregada << endl;
            return;

        }
        if (materiaAgregada != string()) {
            cout << "Por favor introduzca una materia válida: ";
            cin >> materiaAgregada;
        }
        materiaAgregada = materias[4];

    }
}

void Estudiante::eliminarMateria() {
    string materiaEliminada;
    cout << "Introduzca la materia que deseas eliminar: ";
    cin >> materiaEliminada;
    for (int i = 0; i < 5; i++) {
        if (materias[i] == materiaEliminada) {
            materias[i] = "";
            cout << "La materia eliminada es: " << materiaEliminada << endl;
        }
        else {
            cout << "Por favor introduzca una materia válida: ";
            cin >> materiaEliminada;
        }
        break;
    }
}

