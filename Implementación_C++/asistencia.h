#ifndef ASISTENCIA_H
#define ASISTENCIA_H
#include <string>
using namespace std;

class Asistencia {
public:

    string fecha;
    string materia;
    string estado;  // Asistió, falta, tardanza

    Asistencia();

    void mostrarAsistencia(string fecha, string materia, string estado);

};

#endif //ASISTENCIA_H
