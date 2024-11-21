#include <iostream>
#include <string>
#include <stdexcept>
#include "estudiante.h"
#include "asistencia.h"
using namespace std;

int main() {
    Estudiante estudiante;

    cout << "Introduzca el nombre del estudiante: " << endl;
    cin >> estudiante.nombre;

    cout << "Introduzca la edad del estudiante: " << endl;
    cin >> estudiante.edad;
    try {
        if (estudiante.edad < 18 || estudiante.edad > 100) {
            throw invalid_argument("Edad no viable para estudiante de universidad (>= 18 y <= 100)");
        }
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
        return 1;
    }

    cout << "Introduzca el promedio del estudiante: " << endl;
    cin >> estudiante.promedio;
    try {
        if (estudiante.promedio < 0 || estudiante.promedio > 10) {
            throw invalid_argument("Promedio no viable (>= 0 y <= 10)");
        }
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
        return 1;
    }

    estudiante.mostrarEstudiante(estudiante.nombre, estudiante.edad, estudiante.promedio);

    estudiante.mostrarMaterias();
    estudiante.eliminarMateria();
    estudiante.agregarMateria();
    estudiante.mostrarMaterias();

    Asistencia asistencia;

    cout << "Introduzca la fecha de asistencia del estudiante (DD/MM/AAAA): " << endl;
    cin >> asistencia.fecha;

    cout << "Introduzca la materia a la que no/asistió el estudiante: " << endl;
    cin >> asistencia.materia;
    try {
        bool materiaViable = false;
        for (int i = 0; i < 6; i++) {
            if (asistencia.materia == estudiante.materiasViables[i]) {
                materiaViable = true;
                break;
            }
        }
        if (!materiaViable) {
            throw invalid_argument("Materia no viable");
        }
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
        return 1;
    }

    cout << "Introduzca el estado de asistencia del estudiante (asistió, falta, tardanza): " << endl;
    cin >> asistencia.estado;
    try {
        if (asistencia.estado != "asistió" && asistencia.estado != "falta" && asistencia.estado != "tardanza") {
            throw invalid_argument("Estado de asistencia no viable");
        }
    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
        return 1;
    }

    asistencia.mostrarAsistencia(asistencia.fecha, asistencia.materia, asistencia.estado);

    return 0;
}

// preguntar si quiere añadir/preguntar, preguntar si quiere seguir añadiendo/eliminando
// error por si mete algo q no deberia
// no repetir amterias