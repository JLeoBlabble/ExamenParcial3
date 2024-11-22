#ifndef ASISTENCIA_H
#define ASISTENCIA_H
#include <string>
using namespace std;

/* Definir clase Asistencia, con los valores de fecha, materia y estado de asistencia.
 * Seguidamente, se definen las funciones requeridas por el ejercicio.
 */

class Asistencia {
public:

    string fecha;
    string materia;
    string estado;  // Asistió, falta, tardanza

    Asistencia();

    void mostrarAsistencia(string fecha, string materia, string estado);

};

#endif //ASISTENCIA_H
