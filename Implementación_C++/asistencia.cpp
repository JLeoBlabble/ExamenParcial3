#include <iostream>
#include "asistencia.h"
#include <string>
using namespace std;

/* Implementa la clase Asistencia, con sus tres valores
 * y la función requerida por el ejercicio, mostrarAsistencia,
 * que imprime al usuario los datos de la asistencia del alumno.
 */

Asistencia::Asistencia() {

    string fecha;
    string materia;
    string estado;

}

void Asistencia::mostrarAsistencia(string fecha, string materia, string estado) {
    cout << "La fecha de registración es: " << fecha << endl;
    cout << "La materia asistida es: " << materia << endl;
    cout << "El estado de asistencia del estudiante es: " << estado << endl;

}
