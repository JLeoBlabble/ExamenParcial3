#include <iostream>
#include <string>
#include "estudiante.h"
#include "asistencia.h"
using namespace std;

int main() {

    Estudiante estudiante;

    cout << "Introduzca el nombre del estudiante: " << endl;
    cin >> estudiante.nombre;

    bool edadViabilidad = false;
    cout << "Introduzca la edad del estudiante: " << endl;
    cin >> estudiante.edad;
    while (edadViabilidad == false) {
        for (int i = 0; i < 100; i++) {
            if (estudiante.edad == i && estudiante.edad >= 18) {
                edadViabilidad = true;
                break;
            }
        }
        if (edadViabilidad == false || estudiante.edad < 18) {
            cout << "Por favor introduzca una edad viable para estudiante de universidad (>= 18 y <= 100)" << endl;
            cin >> estudiante.edad;
        }
    }

    cout << "Introduzca el promedio del estudiante: " << endl;
    cin >> estudiante.promedio;
    while (estudiante.promedio < 0 || estudiante.promedio > 10) {
        cout << "Por favor introduzca un promedio viable (>= 0 y <=10)" << endl;
        cin >> estudiante.edad;
    }

    estudiante.mostrarEstudiante(estudiante.nombre, estudiante.edad, estudiante.promedio);

    estudiante.mostrarMaterias();
    estudiante.eliminarMateria();
    estudiante.agregarMateria();
    estudiante.mostrarMaterias();


    Asistencia asistencia;

    cout << "Introduzca la fecha de asistencia del estudiante (DD/MM/AAAA): " << endl;
    cin >> asistencia.fecha;

    bool materiaViabilidad = false;
    cout << "Introduzca la materia a la que no/asistió el estudiante: " << endl;
    cin >> asistencia.materia;
    while (materiaViabilidad == false) {
        for (int i = 0; i < 6; i++) {
            if (asistencia.materia == estudiante.materiasViables[i]) {
                materiaViabilidad = true;
                break;
            }
        }
        if (materiaViabilidad == false) {
            cout << "Un estudiante de ingeniería informática sólo tiene las siguientes materias: ";
            for (int i = 0; i < 6; i++) {
                cout << estudiante.materiasViables[i] << ", ";
            }
            cout << "\nPor favor introduzca una de las materias previamente señalizadas: ";
            cin >> asistencia.materia;
        }
    }

    bool estadoViabilidad = false;
    cout << "Introduzca el estado de asistencia del estudiante (asistió, falta, tardanza): " << endl;
    cin >> asistencia.estado;
    while (estadoViabilidad == false) {
        if (asistencia.estado == "asistió" || asistencia.estado == "falta" || asistencia.estado == "tardanza") {
            estadoViabilidad = true;
            break;
        }
        else if (estadoViabilidad == false) {
            cout << "Las únicas opciones viables son las siguientes: asistió, falta, y tardanza. ";
            for (int i = 0; i < 6; i++) {
                cout << estudiante.materiasViables[i] << ", ";
            }
            cout << "\nPor favor introduzca una de las opciones previamente señalizadas: ";
            cin >> asistencia.estado;
        }
    }

    asistencia.mostrarAsistencia(asistencia.fecha, asistencia.materia, asistencia.estado);

}

// preguntar si quiere añadir/preguntar, preguntar si quiere seguir añadiendo/eliminando
// error por si mete algo q no deberia
// no repetir amterias