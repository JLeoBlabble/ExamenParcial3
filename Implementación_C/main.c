#include <stdio.h>
#include <string.h>
#include "asistencia.h"
#include "estudiante.h"

// int en la que se ejecutan las funciones del estudiante y de la asistencia

int main ()
{
    // Definicion de las variables del estudiante y de la asistencia

    Estudiante estudiante;
    char agr_materia [30];
    char elim_materia [30];
    int elim_valida;
    int agr_valida;
    char materias_validas [6][30]= {"Programacion", "Matematicas", "Fisica", "Ingles", "Informatica", "Tecnicas de la Comunicacion"};

    Asistencia asistencia;
    char asist_fecha [10];
    char asist_materia [20];
    char asist_estado [20];
    int materia_valida;

    /*
    Se pide al usuario que introduzca el nombre, la edad y el promedio del estudiante.
    Ya que C no tiene un sistema integrado para el manejo de excepciones,
    se hace uso del bucle do-while para que la edad sea mayor o igual a 18 y para que el promedio sea entre 0 y 10
    Luego se imprimen lod datos pedidos del estudiante.
    */

    printf ("Introduzca el nombre del estudiante: ");
    scanf ("%s", estudiante.nombre);
    do
    {
        printf ("Introduzca la edad del estudiante (18 o mas): ");
        scanf ("%d", &estudiante.edad);
    } while (estudiante.edad < 18);
    do
    {
        printf ("Introduzca el promedio del estudiante (entre 0 y 10): ");
        scanf ("%f", &estudiante.promedio);
    } while (estudiante.promedio < 0 || estudiante.promedio > 10);

    inicializarEstudiante (&estudiante, estudiante.nombre, estudiante.edad, estudiante.promedio);

    mostrarEstudiante (&estudiante);

    mostrarMaterias (&estudiante);

    /*
    Se pide al usuario que introduzca el nombre de la materia que desea agregar, y posteriormente eliminar.
    Y al igual que en el caso anterior, se usa el bucle do-while para asegurarse de que las materias sean validas.
    */

    do
    {
        agr_valida = 0;
        printf ("\nLista de materias validas: ");
        for (int i = 0; i < 6; i++)
        {
            printf ("%s, ", materias_validas [i]);
        }
        printf ("\nIngrese la materia que desee agregar (de la lista de materias validas): ");
        scanf ("%s", agr_materia);
        for (int i = 0; i < 6; i++)
        {
            if (strcmp (agr_materia, materias_validas [i]) == 0)
            {
                agr_valida = 1;
                break;
            }
        }
        for (int i = 0; i < estudiante.num_materias; i++)
        {
            if (strcmp (agr_materia, estudiante.materias [i]) == 0)
            {
                agr_valida = 0;
                printf ("Materia ya existente\n");
                break;
            }
        }
    } while (!agr_valida);
    printf ("\nAgregando materia: %s\n", agr_materia);
    agregarMateria (&estudiante, agr_materia);
    mostrarMaterias (&estudiante);
    do
    {
        elim_valida = 0;
        printf ("\nIngrese la materia que desee eliminar (de las materias existentes): ");
        scanf ("%s", elim_materia);
        for (int i = 0 ; i < estudiante.num_materias; i++)
        {
            if (strcmp (elim_materia, estudiante.materias[i]) == 0)
            {
                elim_valida = 1;
                break;
            }
        }
    } while (!elim_valida);
    printf ("\nEliminando materia: %s\n", elim_materia);
    eliminarMateria (&estudiante, elim_materia);
    mostrarMaterias (&estudiante);

    /*
    Se pide al usuario que introduzca la fecha, la materia y el estado de la asistencia.
    De nuevo, se usa el bucle do-while para asegurarse de que tanto la materia como el estado sean validos.
    */

    printf ("\nIngrese la fecha de la asistencia (DD/MM/AAAA): ");
    scanf ("%s", asist_fecha);
    do
    {
        materia_valida = 0;
        printf ("Ingrese la materia de la asistencia (dentro de las materias existentes): ");
        scanf ("%s", asist_materia);
        for (int i = 0; i < estudiante.num_materias; i++) {
            if (strcmp (asist_materia, estudiante.materias[i]) == 0 || strcmp (asist_materia, agr_materia) == 0)
            {
                materia_valida = 1;
                break;
            }
        }
    } while (!materia_valida);
    do
    {
        printf("Ingrese el estado de la asistencia (asistido, faltado, o llegado tarde): ");
        scanf(" %[^\n]", asist_estado);
    } while (strcmp(asist_estado, "asistido") != 0 && strcmp(asist_estado, "faltado") != 0 && strcmp(asist_estado, "llegado tarde") != 0);
    inicializarAsistencia (&asistencia, asist_fecha, asist_materia, asist_estado);
    printf ("\n%s: ", estudiante.nombre);

    mostrarAsistencia (&asistencia);
}