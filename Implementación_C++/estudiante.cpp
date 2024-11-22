#include <iostream>
#include <string>
#include <stdexcept>
#include "estudiante.h"
using namespace std;

/* Implementa la clase Estudiante, que incluye dentro de esta las funciones requeridas por el ejercicio;
 * mostrar la información del estudiante, mostrar las materias en su horario, y una modificación de dicho horario.
 */

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

/* En las funciones de agregar y eliminar una materia, se pregunta al usuario (S/N)
 * si desea realizar dicha acción, tras comprobar si la lista está vacía/llena,
 * en cuál caso le avisa al usuario y no le permite hacer cambios.
 * Si se introduce otra respuesta, se le vuelve a preguntar al usuario.
 */

void Estudiante::agregarMateria() {
    string siNO;
    string materiaAgregada;

    while (true) {
        bool listaLlena = true;
        for (int i = 0; i < 6; i++) {
            if (materias[i].empty()) {
                listaLlena = false;
                break;
            }
        }

        if (listaLlena) {
            cout << "La lista de materias ya está llena (6), no se pueden agregar más materias." << endl;
            return;
        }

        cout << "¿Deseas agregar una materia? (S/N): ";
        cin >> siNO;
        try {
            if (siNO != "S" && siNO != "N") {
                throw invalid_argument("Respuesta no válida. Por favor, introduzca 'S' o 'N'.");
            } else if (siNO == "N") {
                break;
            } else if (siNO == "S") {
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
                    if (materiaViabilidad == false) {
                        throw invalid_argument("La materia introducida no existe o ya ha sido introducida, por favor introduzca una materia de las siguientes opciones: Matemáticas, Física, Programación, Informática, Inglés o Técnicas-de-Comunicación.");
                    }
                } catch (const invalid_argument& e) {
                    cout << e.what() << endl;
                    continue;
                }

                for (int i = 0; i < 6; i++) {
                    if (materias[i].empty()) {
                        materias[i] = materiaAgregada;
                        cout << "La materia agregada es: " << materiaAgregada << endl;
                        break;
                    }
                }
            }
        } catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }
    }
}

void Estudiante::eliminarMateria() {
    bool listaVacia = true;
    for (int i = 0; i < 6; i++) {
        if (!materias[i].empty()) {
            listaVacia = false;
            break;
        }
    }

    if (listaVacia) {
        cout << "La lista de materias está vacía. No se pueden eliminar materias." << endl;
        return;
    }

    string siNO;
    string materiaEliminada;

    while (true) {
        cout << "¿Deseas eliminar una materia? (S/N): ";
        cin >> siNO;
        try {
            if (siNO != "S" && siNO != "N") {
                throw invalid_argument("Respuesta no válida. Por favor, introduzca 'S' o 'N'.");
            } else if (siNO == "N") {
                break;
            } else if (siNO == "S") {
                cout << "Introduzca la materia que deseas eliminar: ";
                cin >> materiaEliminada;
                try {
                    bool materiaViabilidad = false;
                    for (int i = 0; i < 6; i++) {
                        if (materiaEliminada == materias[i]) {
                            materiaViabilidad = true;
                            break;
                        }
                    }
                    if (!materiaViabilidad) {
                        throw invalid_argument("La materia introducida no existe en la lista actual de materias.");
                    }
                } catch (const invalid_argument& e) {
                    cout << e.what() << endl;
                    continue;
                }

                for (int i = 0; i < 6; i++) {
                    if (materias[i] == materiaEliminada) {
                        materias[i].clear();
                        cout << "La materia eliminada es: " << materiaEliminada << endl;
                        break;
                    }
                }
            }
        } catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }
    }
}