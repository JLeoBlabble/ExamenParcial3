#include <iostream>
#include "asistencia.h"
#include <string>
using namespace std;

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
