#ifndef CANDIDATO_H
#define CANDIDATO_H

#include <iostream>
#include <time.h>

using namespace std;
struct Candidato
{
    /* data */
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
    string ciudad_residencia; // solo pueden postularse donde habitan
    
    Candidato *sig;
};

#endif
