#include <iostream>
#include <string>
#include <stdexcept>
#include "estudiante.h"
#include "asistencia.h"
using namespace std;

/* Función principal del programa.
 * Su propósito es interactuar con el usuario para recibir las respuestas necesarias
 * para completar los datos requiridos por las funciones en los archivos header,
 * para después llamar a esas funciones y hacer que realicen su código.
 */

int main() {
    Estudiante estudiante;

    /* Preguntar datos del estudiante, asegurándose de que la edad y el promedio sean viables
     * en caso contrario, se vuelve a preguntar.
    */

    cout << "Introduzca el nombre del estudiante: " << endl;
    cin >> estudiante.nombre;

    while (true) {
        cout << "Introduzca la edad del estudiante: " << endl;
        cin >> estudiante.edad;
        try {
            if (estudiante.edad < 18 || estudiante.edad > 100) {
                throw invalid_argument("Edad no viable para estudiante de universidad (>= 18 y <= 100)");
            }
            break;
        } catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }
    }

    while (true) {
        cout << "Introduzca el promedio del estudiante: " << endl;
        cin >> estudiante.promedio;
        try {
            if (estudiante.promedio < 0 || estudiante.promedio > 10) {
                throw invalid_argument("Promedio no viable (>= 0 y <= 10)");
            }
            break;
        } catch (const invalid_argument& e) {
            cout << e.what() << endl;
        }
    }

    estudiante.mostrarEstudiante(estudiante.nombre, estudiante.edad, estudiante.promedio);

    estudiante.mostrarMaterias();
    estudiante.eliminarMateria();
    estudiante.agregarMateria();
    estudiante.mostrarMaterias();

    // Preguntar al usuario si desea pasar asistencia. Si no, termina el programa
    char registrarAsistencia;
    while (true) {
        cout << "¿Desea registrar asistencia? (Y/N): ";
        cin >> registrarAsistencia;
        if (registrarAsistencia == 'Y' || registrarAsistencia == 'N') {
            break;
        } else {
            cout << "Respuesta no válida. Por favor, introduzca 'Y' o 'N'." << endl;
        }
    }

    if (registrarAsistencia == 'N') {
        return 0;
    }

    Asistencia asistencia;

    /* Preguntar los datos de asistencia, asegurándose de que la materia y el estado sean viables.
     * En caso contrario, se vuelve a preguntar.
    */
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
        if (materiaViable == false) {
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