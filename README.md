# ExamenParcial3

https://github.com/JLeoBlabble/ExamenParcial3.git 

Trabajo realizado con apoyo de Github Copilot. 

## Parte 1: Teoría 

### Pregunta 1: ¿Cuál es la principal diferencia entre la estructura básica del programa en C y C++?
Respuesta: b) C utiliza printf y scanf mientras que C++ utiliza std::cout y std::cin

### Pregunta 2: ¿Qué es un espacio de nombres en C++?
Respuesta: a) Una característica que permite agrupar entidades como clases, objetos y funciones bajo un nombre.

### Pregunta 3: En programación orientada a objetos en C++, ¿qué es una clase?
Respuesta: d) Una plantilla para crear objetos, proporciona una definición inicial para el estado (miembros de datos) y el comportamiento (miembros de la función).

### Pregunta 4: ¿Qué son los templates en C++?
Respuesta: b) Permiten la creación de funciones y clases genéricas, es decir, que pueden trabajar con cualquier tipo de datos.

### Pregunta 5: ¿Cuál de los dos lenguajes consideras más adecuado para el proyecto del CGEA?
Respuesta: Consideramos que el lenguaje más adecuado para el proyecto es C++. Esto se debe a que, al ser un lenguaje más moderno, tiene características muy útiles como el control de errores entre otras, lo cual C no tiene.

### Pregunta 6: ¿Qué recomendaciones harías al equipo de desarrollo del CGEA para la siguiente fase del proyecto?
Para la siguiente fase del proyecto del Centro Global de Estudios Avanzados (CGEA), recomendamos utilizar C++ como lenguaje principal para el desarrollo del sistema de gestión académica del CGEA. Esto es debido a varios factores: 

#### Naturaleza del Proyecto:
C++ es ideal por su programación orientada a objetos (POO), facilitando la gestión de datos complejos y escalabilidad.

#### Bibliotecas Estándar:
Las bibliotecas de C++ son más completas, lo que reduce el tiempo de desarrollo y mejora la funcionalidad del sistema.

#### Manejo de Excepciones:
C++ permite gestionar errores de manera eficiente con try, catch, y throw, mejorando la estabilidad del sistema.

#### Escalabilidad y Mantenimiento:
La modularidad de C++ facilita el trabajo en equipo, un requisito para un sistema académico internacional.

#### Interfaz de Usuario (UI):
C++ soporta bibliotecas modernas como Qt, útiles para crear interfaces gráficas.

#### Rendimiento y Control de Hardware:
C++ es suficiente para la mayoría de las necesidades del sistema, mientras que C solo se considera para módulos críticos.

# Diferencias entre C y C++

Programacion: C es un lenguaje procedural, por lo que se enfoca principalmente en las funciones. Mientras que C++ es un lenguaje multiparadigma, lo que significa que soporta tanto programacion procedural como orientado a objetos.

Bibiotecas Estandar: Las bibloitecas estantdar de C estan mas limitadas, teniendo principalmente funciones basicas. A diferencia de las de C++ que tienen incluidas funciones mas complejas.

Control de Excepciones: C++ tiene soporte para el manejo de excepciones mediante try, catch y throw, las cuales hacen el trabajo mucho mas sencillo. No como C que no tiene ningun soporte para el manejo de excepciones incluido.

Compatibilidad: C es independiente de C++.

Velocidad y Complejidad: C es simple e ideal para aplicaciones que requieran mucha eficiencia y control sobre el hardware. En cambio C++, al tener capacidad de orientacion a objetos, puede resultar mas complejo y extenso.

# Ejercicios (Parte 2): 
Todos los ejercicios tienen funciones que son llamadas en el main.c de cada ejecutable.
Los ejercicios se han realizado dos veces en lenguaje C y C++, divididos en dos directorios llamados "Implementación_C" e "Implementación_C++"

## Ejercicio 1 - Estructura del estudiante 
Localizados en "estudiante.h" y "estudiante.c/pp" en los dos directorios. 

En el primer ejercicio, creamos una nueva clase que llamamos "Estudiante", en la cual incluimos tres campos: el nombre, la edad, y el promedio de un estudiante.
Estos tres datos hemos hecho para que el sistema le pregunte al usuario para que ellos mismos puedan introducir sus valores. 
Si algún dato no es válido (ej. una edad menor de 18 o un promedio mayor de 10) el sistema repetira la questión.
Una vez obtenida los datos, utilizamos una función que hemos creado llamada "mostrarEstudiante()" que devolvera los valores introducidos.

### Enunciado Ejercicio 1: 
C++:
Implementa una estructura llamada Estudiante con los campos: nombre, edad, y promedio.
Desarrolla la función mostrarEstudiante() que muestre todos los campos de la estructura.

C:
Realiza una implementación equivalente en el lenguaje C.

## Ejercicio 2 - Gestión de materias
Como en el ejercicio anterior, ambas versiones del código están divididos entre los "estudiante.h" y "estudiante.c/cpp" de sus respectivos directorios.

En este ejercicio, empezamos creando una lista de materias que el estudiante tendrá por defecto, estas siendo "Matemáticas", "Programaciõn", "Inglés" e "Informática". 
Siguiendo esto, creamos una serie de funciones, vinculandolas a la clase de Estudiante que creamos en el primer ejercicio, para que el usuario pueda modificar esta lista de estudiantes. El usuario, dentro del límite de 6 materias disponibles para un alumno de ingeniería informática, puede añadir y eliminar las que quiera, siendo preguntado si desea seguir añadiendo/eliminando o no.
Si la lista está llena, vacía, o el usuario ha introducido una materia más de una vez, será avisado.
Por último, el programa mostrará esta misma lista de materias dos veces: la primera como era originalmente, y la segunda con los cambios realizados. 

### Enunciado Ejercicio 2: 
C++:
Añade a la estructura Estudiante una lista o vector de materias en las que está inscrito.
Implementa funciones para agregar, eliminar y mostrar estas materias.

C:
Realiza una implementación equivalente en el lenguaje C.

## Ejercicio 3 - Registro de asistencia
Para este ejercicio, creamos archivos .h y .c/pp nuevos, con el nombre de "asistencia" (en ambos directorios).

Tal como en el primer ejercicio con la clase de Estudiantes, en este hicimos algo igual creando una nueva clase llamada "Asistencia", en la cual definimos otra serie de tres valores relacionados con la asistencia de un alumno; la fecha de la incidencia, la materia a la que asistió o falto, y el estado de sus asistencia, si llego tarde, a tiempo, o faltó.
Posteriormente, relacionando las dos clases, creamos una serie de funciones para que el própio usuario pueda rellenar estos tres campos.
Primero, hicimos un código para que le pregunte al usuario si siquiera desea registrar la asistencia. Si no, pues todo el programa ya ha finalizado. Si mete algo distinto a "S" o "N", el programa le volverá a preguntar, y si introduce "S", seguirá.
Seguidamente, el programa empezará preguntando al usuario por la información requirida por las tres variables. Si ocurre alguna incidencia, como si introduces que un alumno ha asistido/faltado a una materia que no tiene en su horario actual, se le avisará y podrá volver a contestar.

### Enunciado Ejercicio 3: 
C++:
Diseña una clase o estructura Asistencia que contenga: fecha, materia y estado (asistió, falta, tardanza).
Integra esta estructura con Estudiante y desarrolla funciones para registrar y mostrar la asistencia.

C:
Realiza una implementación equivalente en el lenguaje C.
