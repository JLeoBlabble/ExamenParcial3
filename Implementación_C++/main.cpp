#include <iostream>
#include <string>
#include "estudiante.h"
using namespace std;

int main() {

    Estudiante estudiante;
    estudiante.mostrarEstudiante("Jaime", 67, 5.8);

    estudiante.mostrarMaterias();
    estudiante.eliminarMateria();
    estudiante.agregarMateria();
    estudiante.mostrarMaterias();

}

// preguntar si quiere añadir/preguntar, preguntar si quiere seguir añadiendo/eliminando