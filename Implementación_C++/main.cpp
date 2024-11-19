#include <iostream>
#include <string>
#include "estudiante.h"
using namespace std;

int main() {

    Estudiante estudiante;
    estudiante.mostrarEstudiante("Jaime", 67, 5.8);

    estudiante.mostrarMaterias();
    estudiante.agregarMateria();
    estudiante.eliminarMateria();

}
