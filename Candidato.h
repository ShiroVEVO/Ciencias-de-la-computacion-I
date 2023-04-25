#ifndef CANDIDATO_H
#define CANDIDATO_H

#include <iostream>
#include <time.h>

using namespace std;

struct Candidato
{
    //Atributos Reglas de negocio:
    string nombre, apellido, estado_civil, ciudad_nacimiento, ciudad_residencia; // solo pueden postularse donde habitan
	long int identificacion;
    char sexo;
    struct tm fechaNacimiento;
    
    //Constructor
    Candidato(string nombre_, string apellido_, long int identificacion_, char sexo_, string estado_civil_, string ciudad_nacimiento_, string ciudad_residencia_, 
            struct tm fechaNacimiento_) : nombre(nombre_), apellido(apellido_), identificacion(identificacion_), sexo(sexo_), estado_civil(estado_civil_), 
            ciudad_nacimiento(ciudad_nacimiento_), ciudad_residencia(ciudad_residencia_), fechaNacimiento(fechaNacimiento_) {}
};

#endif
