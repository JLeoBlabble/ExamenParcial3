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

    cout << "Introduzca la fecha de asistencia del estudiante: " << endl;
    cin >> asistencia.fecha;

    cout << "Introduzca la materia a la que no/asistió el estudiante: " << endl;
    cin >> asistencia.materia;

    cout << "Introduzca el estado de asistencia del estudiante: " << endl;
    cin >> asistencia.estado;

    asistencia.mostrarAsistencia(asistencia.fecha, asistencia.materia, asistencia.estado);
}

// preguntar si quiere añadir/preguntar, preguntar si quiere seguir añadiendo/eliminando
// error por si mete algo q no deberia
// lista de materias posibles
// edad no sea letras