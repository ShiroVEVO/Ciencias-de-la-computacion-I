#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

struct Persona
{
    //Atributos Reglas de negocio:
    string nombre;
    string apellido;
    long int identificacion;
    char sexo;
    string estado_civil;
    struct tm fechaNacimiento;
    /*
    Establecer la fecha deseada
    fecha.tm_year = 123; // Año 2023 (1900 + 123)
    fecha.tm_mon = 3; // Mes abril (0-11)
    fecha.tm_mday = 23; // Día 23
    */
    string ciudad_nacimiento;
    string ciudad_residencia;
};

#endif
